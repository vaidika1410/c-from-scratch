// program to calculate the income tax paif by an employee to the govt.

#include <stdio.h>

int main(){
    float tax = 0, income;
    printf("enter your income: ");
    scanf("%f", &income);

    if(income >= 250000 && income <= 500000) {
        tax = tax + 0.05 * (income - 250000);
    } else if(income >= 500000 && income <= 1000000) {
        tax = tax + 0.2 * (income - 500000);
    } else if(income >= 1000000) {
        tax = tax + 0.3 * (income - 10000000);
    }

    printf("Your net tax to be paid by the end of this month is %f", tax);
    return 0;
}