#include <stdio.h>

void print_bits(int num) {
    unsigned int mask = 1 << 31;  // Start with the most significant bit

    for (int i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0;  // Extract the current bit
        printf("%d", bit);
        mask >>= 1;  // Right-shift the mask to check the next bit
    }

    printf("\n");  // Print a new line after printing all the bits
}

int main() {
    int integer;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &integer);
    print_bits(integer);
    return 0;
}
