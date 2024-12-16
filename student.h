#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[20];
    int age;
    float avgGrade;
} Student;

void setGrade(Student *student, float grade);
int otlichnikStudent(Student *student);

#endif