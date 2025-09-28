#include <stdio.h>



int main()
{
    int dolares = 0;

    printf("\nenter an amount: ");
    scanf("%d", &dolares);

    int twenties = dolares / 20;
    int tens = (dolares - twenties * 20) / 10;
    int fives = (dolares - (twenties * 20 + tens * 10)) / 5;
    int ones = (dolares - (twenties * 20 + tens * 10 + fives * 5)) / 1;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    
    return 0;
}