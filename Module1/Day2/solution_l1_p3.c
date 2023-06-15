#include <stdio.h>

int sumOfAlternateElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int size = sizeof(a) / sizeof(a[0]);

    int result = sumOfAlternateElements(a, size);
    printf("Sum of alternate elements is: %d\n", result);

    return 0;
}