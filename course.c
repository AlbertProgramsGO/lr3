#include "course.h"

void addStudent(Course *course, Student student) {
    if (course->studentCount < course->maxStudents) {
        course->students[course->studentCount] = student;
        course->studentCount++;
    }
}

Student* topStudent(Course *course) {
    
    Student *topStudent = &course->students[0];
    for (int i = 1; i < course->studentCount; i++) {
        if (course->students[i].avgGrade > topStudent->avgGrade) {
            topStudent = &course->students[i];
        }
    }
    return topStudent;
}