//Compute Total Seconds

#include <stdio.h>

// Function to compute the total seconds
int computeTotalSeconds(int hours, int minutes, int seconds) {
  int totalSeconds = hours * 3600 + minutes * 60 + seconds;
  return totalSeconds;
}

int main() {
  int hours, minutes, seconds;

  // Get the hours, minutes, and seconds from the user
  printf("Enter the hours: ");
  scanf("%d", &hours);
  printf("Enter the minutes: ");
  scanf("%d", &minutes);
  printf("Enter the seconds: ");
  scanf("%d", &seconds);

  // Compute the total seconds
  int totalSeconds = computeTotalSeconds(hours, minutes, seconds);

  // Print the total seconds
  printf("The total number of seconds is: %d\n", totalSeconds);

  return 0;
}