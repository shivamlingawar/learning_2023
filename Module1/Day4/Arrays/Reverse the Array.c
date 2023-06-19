// Reverse The Array .

#include <stdio.h>

// Function to reverse the elements of an array
void reverseArray(int *arr, int size) {
  int i, j, temp;

  for (i = 0, j = size - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  // Declare an array of size 5
  int arr[5] = {1, 2, 3, 4, 5};

  // Print the original array
  printf("The original array is: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Reverse the array
  reverseArray(arr, 5);

  // Print the reversed array
  printf("The reversed array is: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}