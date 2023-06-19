// Sum & Average of 1D Array

#include <stdio.h>

// Function to find the sum of an array
int sumArray(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

// Function to find the average of an array
float averageArray(int *arr, int size) {
  int sum = sumArray(arr, size);
  return (float)sum / size;
}

int main() {
  // Declare an array of size 5
  int arr[5];

  // Get the elements of the array from the user
  for (int i = 0; i < 5; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Find the sum and average of the array
  int sum = sumArray(arr, 5);
  float average = averageArray(arr, 5);

  // Print the sum and average of the array
  printf("The sum of the array is %d\n", sum);
  printf("The average of the array is %.2f\n", average);

  return 0;
}