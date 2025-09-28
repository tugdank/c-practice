#include <stdio.h>



int main()
{
    float loan = 0.0f;
    float interestRate = 0.0f;
    float monthlyPayment = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    loan = (loan - monthlyPayment) + loan * (interestRate / 100 / 12);
    printf("\nBalance remaining after the first payment: $%.2f\n", loan);
    loan = (loan - monthlyPayment) + loan * (interestRate / 100 / 12);
    printf("\nBalance remaining after the second payment: $%.2f\n", loan);
    loan = (loan - monthlyPayment) + loan * (interestRate / 100 / 12);
    printf("\nBalance remaining after the third payment: $%.2f\n", loan);




    return 0;
}