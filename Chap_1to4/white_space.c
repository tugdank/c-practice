#include <stdio.h>


int main(void)
{

    int i = 34;
    int i2 = 45;

    printf("%d, %d\n", i, i2);
    scanf("   /%d    /    %d", &i, &i2);
    printf("%d, %d", i, i2);

    int j = 33;
    int j2 = 44;

    printf("\n\n%d, %d\n", j, j2);
    scanf("%d/ %d", &j, &j2);
    printf("%d, %d", j, j2);

    
    return 0;
}