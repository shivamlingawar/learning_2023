#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudent(struct Student* students, int size, const char* searchName);
void displayStudent(const struct Student* student);

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 0;
    }

    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
        printf("\n");
    }

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    searchStudent(students, size, searchName);

    free(students);

    return 0;
}

void searchStudent(struct Student* students, int size, const char* searchName) {
    int found = 0;

    printf("\nSearch Results:\n");

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            displayStudent(&students[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}

void displayStudent(const struct Student* student) {
    printf("Student Details:\n");
    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
    printf("\n");
}