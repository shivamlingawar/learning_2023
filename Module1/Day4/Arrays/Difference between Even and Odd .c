// Difference Between Even and Odd Element

#include <stdio.h>

// Function to find the difference between the sum of even and odd elements in an array
int diffEvenOdd(int *arr, int size) {
  int evenSum = 0, oddSum = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      evenSum += arr[i];
    } else {
      oddSum += arr[i];
    }
  }
  return evenSum - oddSum;
}

int main() {
  // Declare an array of size 5
  int arr[5] = {1, 2, 3, 4, 5};

  // Find the difference between the sum of even and odd elements in the array
  int diff = diffEvenOdd(arr, 5);

  // Print the difference
  printf("The difference between the sum of even and odd elements is %d\n", diff);

  return 0;
}