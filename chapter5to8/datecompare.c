#include <stdio.h>


int main(void){

    int y1, m1, d1, y2, m2, d2, s1, s2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &m1, &d1, &y1);
    printf("\nEnter second date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &m2, &d2, &y2);
    s1 = y1 * 365 + m1 * 30 + d1;
    s2 = y2 * 365 + m2 * 30 + d2;

    if (s2 > s1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
    else
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);

}