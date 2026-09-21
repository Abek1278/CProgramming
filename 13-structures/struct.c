/**
 * 13-structures/struct.c
 * 
 * Demonstrates defining and using a struct (user-defined composite data type).
 */

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main(void) {
    struct Student student1;

    student1.id = 101;
    strcpy(student1.name, "Alex");
    student1.gpa = 3.85f;

    // Direct initialization
    struct Student student2 = {102, "Taylor", 3.92f};

    printf("Student 1: ID = %d, Name = %s, GPA = %.2f\n",
           student1.id, student1.name, student1.gpa);
    printf("Student 2: ID = %d, Name = %s, GPA = %.2f\n",
           student2.id, student2.name, student2.gpa);

    return 0;
}
