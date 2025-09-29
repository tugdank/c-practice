#include <stdio.h>

/*Write a program that calculates how many digits a number contains. You
may assume the number has no more than four digits.*/

int main(void)
{

    int numba = 0;

    printf("Enter a number: ");
    scanf("%d", &numba);
    printf("\nThe number %d has ", numba);

    if (numba >= -9 && numba <= 9) {
        printf("1 digit.\n");
    } else if (numba >= -99 && numba <= 99) {
        printf("2 digits.\n");
    } else if (numba >= -999 && numba <= 999) {
        printf("3 digits.\n");
    } else if (numba >= -9999 && numba <= 9999) {
        printf("4 digits.\n");
    } else printf("more than 4 digits.\n");


    return 0;
}