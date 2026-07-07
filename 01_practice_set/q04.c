// program to calculate simple interest
#include <stdio.h>

int main(){
    int principal=100, rate=4, years=1 ;
    float si = (principal * rate * years) / 100;
    printf("simple interest: %f", si);
    return 0;
}