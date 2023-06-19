// Toggle Case

#include <stdio.h>

// Function to toggle the case of a string
void toggleCase(char *str) {
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }
}

int main() {
  char str[100];

  // Get the string from the user
  printf("Enter a string: ");
  fgets(str, 100, stdin);

  // Toggle the case of the string
  toggleCase(str);

  // Print the toggled string
  printf("The toggled string is: %s\n", str);

  return 0;
}