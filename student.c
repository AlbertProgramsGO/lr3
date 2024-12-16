#include "student.h"

void setGrade(Student *student, float grade) {
    student->avgGrade = grade;
}

int otlichnikStudent(Student *student) {
    return student->avgGrade >= 4.5;
}