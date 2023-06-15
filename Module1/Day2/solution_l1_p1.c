#include <stdio.h>

void printExponent(double x) {
    
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr & 0x7FF0000000000000ULL) >> 52;

    // Hexadecimal 
    printf("Hexadecimal: 0x%llX\n", exponent);

    // Binary 
    printf("Binary: 0b");
    for (int i = 11; i >= 0; i--) {
        if (exponent & (1ULL << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}