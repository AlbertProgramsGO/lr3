#include <assert.h>
#include "student.h"

void test_setGrade() {
    Student student = {"Arseniy", 20, 4.2};
    setGrade(&student, 4.3);
    assert(student.avgGrade == 4.3);
}

void test_otlichnikStudent() {
    Student student1 = {"Stepan", 20, 4.8};
    Student student2 = {"Petya", 22, 4.3};
    assert(otlichnikStudent(&student1) == 1);
    assert(otlichnikStudent(&student2) == 0);
}

int main() {
    test_setGrade();
    test_otlichnikStudent();
    return 0;
}