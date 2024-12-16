#ifndef COURSE_H
#define COURSE_H

#include "student.h"

typedef struct {
    char name[20];
    int studentCount;
    int maxStudents;
    Student students[50];
} Course;

void addStudent(Course *course, Student student);
Student* topStudent(Course *course);

#endif