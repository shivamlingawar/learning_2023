// Min & Max of 1D Array

#include <stdio.h>

// Function to find the minimum of an array
int minArray(int *arr, int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

// Function to find the maximum of an array
int maxArray(int *arr, int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  // Declare an array of size 5
  int arr[5];

  // Get the elements of the array from the user
  for (int i = 0; i < 5; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Find the minimum and maximum of the array
  int min = minArray(arr, 5);
  int max = maxArray(arr, 5);

  // Print the minimum and maximum of the array
  printf("The minimum value of the array is %d\n", min);
  printf("The maximum value of the array is %d\n", max);

  return 0;
}