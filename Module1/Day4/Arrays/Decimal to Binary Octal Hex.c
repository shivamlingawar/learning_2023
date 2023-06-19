// Decimal to Binary Octal Hex

#include <stdio.h>

// Function to convert decimal to binary
char *decimalToBinary(int num) {
  static char bin[32];
  int i = 0;

  while (num > 0) {
    bin[i++] = (num % 2) + '0';
    num /= 2;
  }

  bin[i] = '\0';
  return bin;
}

// Function to convert decimal to octal
char *decimalToOctal(int num) {
  static char oct[10];
  int i = 0;

  while (num > 0) {
    oct[i++] = (num % 8) + '0';
    num /= 8;
  }

  oct[i] = '\0';
  return oct;
}

// Function to convert decimal to hexadecimal
char *decimalToHexadecimal(int num) {
  static char hex[10];
  int i = 0;

  while (num > 0) {
    int rem = num % 16;
    if (rem < 10) {
      hex[i++] = rem + '0';
    } else {
      hex[i++] = rem - 10 + 'A';
    }
    num /= 16;
  }

  hex[i] = '\0';
  return hex;
}

int main() {
  int num;

  // Get the decimal number from the user
  printf("Enter a decimal number: ");
  scanf("%d", &num);

  // Convert the decimal number to binary, octal, and hexadecimal
  char *bin = decimalToBinary(num);
  char *oct = decimalToOctal(num);
  char *hex = decimalToHexadecimal(num);

  // Print the converted numbers
  printf("The binary number is: %s\n", bin);
  printf("The octal number is: %s\n", oct);
  printf("The hexadecimal number is: %s\n", hex);

  return 0;
}