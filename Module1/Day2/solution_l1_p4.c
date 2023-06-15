#include <stdio.h>

int countSetBits(int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int bits = 0;
        while (num > 0) {
            bits += num & 1;
            num >>= 1;
        }
        totalBits += bits;
    }
    return totalBits;
}

int main() {
    int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);

    int result = countSetBits(a, size);
    printf("Total number of set bits: %d\n", result);

    return 0;
}
