#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void calculateTimeDifference(struct Time start, struct Time end, struct Time *diff) {
    int totalSecondsStart, totalSecondsEnd, diffSeconds;
    
    totalSecondsStart = start.hours * 3600 + start.minutes * 60 + start.seconds;
    totalSecondsEnd = end.hours * 3600 + end.minutes * 60 + end.seconds;
    diffSeconds = totalSecondsEnd - totalSecondsStart;
   
    diff->hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff->minutes = diffSeconds / 60;
    diff->seconds = diffSeconds % 60;
}

int main() {
    struct Time startTime, endTime, timeDifference;
    
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));
    
    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));
    
    calculateTimeDifference(startTime, endTime, &timeDifference);
    
    printf("\nTime difference: %d hours %d minutes %d seconds\n", timeDifference.hours, timeDifference.minutes, timeDifference.seconds);
    
    return 0;
}