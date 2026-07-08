#include <stdio.h>

int main(){
    int a, b, c;
    printf("enter your marks: \n");
    scanf("%d\n %d \n%d", &a, &b, &c);

    float total = (a + b + c) / 3;
    if(total < 40 || a < 33 || b < 33 || c < 33) {
        printf("your total percenatge is %f and your are fail", total);
    } else { 
        printf("your total percenatge is %f and your are pass", total);
    }
    return 0;
}