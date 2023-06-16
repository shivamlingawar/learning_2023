#include <stdio.h>

void print_pattern(int n) {
    int i, j;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    print_pattern(num);

    return 0;
}
