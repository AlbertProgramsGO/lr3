#include <stdio.h>
#include "student.h"
#include "course.h"

int main() {
    Student student1 = {"Ilya", 21, 3.8};
    Student student2 = {"Timur", 23, 4.1};
    Student student3 = {"Sergey", 20, 3.9};
    Student student4 = {"Albert", 25, 4.7};

    Course course1 = {"Mathematics", 0, 4};

    addStudent(&course1, student1);
    addStudent(&course1, student2);
    addStudent(&course1, student3);
    addStudent(&course1, student4);

    Student* topStudent1 = topStudent(&course1);
    if (topStudent1) {
        printf("Top student: %s with grade %.2f\n", topStudent1->name, topStudent1->avgGrade);
    }

    return 0;
}