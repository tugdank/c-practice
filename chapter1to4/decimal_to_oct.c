#include <stdio.h>


int main(void)
{
    int users = 0;
    int result = 0;

    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;
    int digit4 = 0;
    int digit5 = 0;

    printf("\nEnter a number between 0 and 32767: ");
    scanf("%d", &users);
    digit1 = users / 8 / 8 / 8 / 8 % 8;
    digit2 = users / 8 / 8 / 8 % 8;
    digit3 = users / 8 / 8 % 8;
    digit4 = users / 8 % 8;
    digit5 = users % 8;
    printf("\nIn octal, our number is: %d%d%d%d%d", digit1, digit2, digit3, digit4, digit5);

    return 0;
}