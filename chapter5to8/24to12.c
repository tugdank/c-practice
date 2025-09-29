#include <stdio.h>

/* Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form */

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    if (hours >= 13 && hours <= 24) {
        printf("\nEquivalent 12-hour time: %d:%.2d PM", hours - 12, minutes);
    } else if (hours >= 0 && hours < 13) {
        printf("\nEquivalent 12-hour time: %.2d:%.2d AM", hours, minutes);
    } else printf("\nInvalid input.");
}