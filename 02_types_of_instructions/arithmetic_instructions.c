#include <stdio.h>

int main(){
    int a = 4, b = 6;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); // both the operands are integers, hence output is also an integer, even if it gives a real value
    float c = b / a;
    printf("c: %f", c);

    return 0;
}