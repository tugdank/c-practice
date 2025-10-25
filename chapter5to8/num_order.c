#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, small, small1, 
        smallest, bigger, bigger1, biggest;

    printf("Enter 4 double digit numbers: \n");
    scanf("%2d %2d %2d %2d", &num1, &num2, &num3, &num4);
    if (num1 >= num2) {
        bigger = num1;
        small = num2;
    } else {
        bigger = num2;
        small = num1;
    }

    if (num3 >= num4) {
        bigger1 = num3;
        small1 = num4;
    } else {
        bigger1 = num4;
        small1 = num3;
    }

    if (small >= small1) 
        smallest = small1;
    else 
        smallest = small;
    
    if (bigger >= bigger1)
        biggest = bigger;
    else
        biggest = bigger1;

    printf("Largest: %d\nSmallest: %d\n", biggest, smallest);

    return 0;
}