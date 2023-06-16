#include <stdio.h>

int find_smallest_digit(int num) {
    int smallest = 9;

    while (num > 0) {
        int digit = num % 10;
        smallest = (digit < smallest) ? digit : smallest;
        num /= 10;
    }

    return smallest;
}

int find_largest_digit(int num) {
    int largest = 0;

    while (num > 0) {
        int digit = num % 10;
        largest = (digit > largest) ? digit : largest;
        num /= 10;
    }

    return largest;
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int smallest = find_smallest_digit(numbers[0]);
    int largest = find_largest_digit(numbers[0]);

    for (int i = 1; i < n; i++) {
        int digit = find_smallest_digit(numbers[i]);
        smallest = (digit < smallest) ? digit : smallest;

        digit = find_largest_digit(numbers[i]);
        largest = (digit > largest) ? digit : largest;
    }

    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }

    return 0;
}
