#include <stdio.h>
#include <stdlib.h>

int find_largest_number(int num) {
    char num_str[5];
    sprintf(num_str, "%d", num);
    int largest_num = -1;

    for (int i = 0; i < 4; i++) {
        char new_num_str[4];
        int idx = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                new_num_str[idx] = num_str[j];
                idx++;
            }
        }
        new_num_str[idx] = '\0';

        int new_num = atoi(new_num_str);
        largest_num = (new_num > largest_num) ? new_num : largest_num;
    }

    return largest_num;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largest = find_largest_number(number);
    printf("The largest number after deleting a single digit from %d is: %d\n", number, largest);

    return 0;
}
