#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];
    char *tempa = (char *)a;
    char *btoa = (char *)a;
    char *bptr = (char *)b;
    char *temptob= (char *)b;

    size_t i; // Declare the variable outside the loop

    for (i = 0; i < size; i++) {
        temp[i] = tempa[i];
        btoa[i] = bptr[i];
        temptob[i] = temp[i];
    }
}

int main() {
    int a = 5;
    int b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    char x = 'A';
    char y = 'B';

    printf("Before swapping: x = %c, y = %c\n", x, y);
    swap(&x, &y, sizeof(char));
    printf("After swapping: x = %c, y = %c\n", x, y);

    return 0;
}