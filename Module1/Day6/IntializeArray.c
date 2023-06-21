#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(char* inputString, struct Student* students, int size);

int main() {
    int size;
    char inputString[100];

    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Clear the newline character from the input buffer

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 0;
    }

    printf("\nEnter the string input:\n");
    fgets(inputString, sizeof(inputString), stdin);

    parseString(inputString, students, size);

    printf("\nStudent details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}

void parseString(char* inputString, struct Student* students, int size) {
    char* token;
    int i = 0;

    token = strtok(inputString, " ");
    while (token != NULL) {
        if (i >= size) {
            printf("Exceeded the specified number of students. Ignoring additional input.\n");
            break;
        }

        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        if (token == NULL)
            break;

        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';

        token = strtok(NULL, " ");
        if (token == NULL)
            break;

        students[i].marks = atof(token);

        i++;
        token = strtok(NULL, " ");
    }
}