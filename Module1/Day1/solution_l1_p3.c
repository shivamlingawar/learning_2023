#include <stdio.h>

typedef struct {
    int rollNo;
    char name[50];
    int physics;
    int maths;
    int chemistry;
} Student;

void printSummary(Student student) {
    int total = student.physics + student.maths + student.chemistry;
    float percentage = (float)total / 3;

    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %d\n", student.physics);
    printf("Math Marks: %d\n", student.maths);
    printf("Chemistry Marks: %d\n", student.chemistry);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);;
}

int main() {
    Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);

    printf("Enter Marks of Physics: ");
    scanf("%d", &student.physics);

    printf("Enter Marks of Math: ");
    scanf("%d", &student.maths);

    printf("Enter Marks of Chemistry: ");
    scanf("%d", &student.chemistry);

    printSummary(student);

    return 0;
}
