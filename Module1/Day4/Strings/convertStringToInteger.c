// Convert String to Integer

#include <stdio.h>

// Function to convert a string to an integer
int stringToInteger(char *str) {
  int num = 0;
  int i = 0;

  // Check if the string is a valid number
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] < '0' || str[i] > '9') {
      return -1;
    }
  }

  // Convert the string to an integer
  for (i = 0; str[i] != '\0'; i++) {
    num = num * 10 + (str[i] - '0');
  }

  return num;
}

int main() {
  char str[100];
  int num;

  // Get the string from the user
  printf("Enter a string: ");
  fgets(str, 100, stdin);

  // Convert the string to an integer
  num = stringToInteger(str);

  // Print the integer
  if (num == -1) {
    printf("The string is not a valid number.\n");
  } else {
    printf("The integer is: %d\n", num);
  }

  return 0;
}