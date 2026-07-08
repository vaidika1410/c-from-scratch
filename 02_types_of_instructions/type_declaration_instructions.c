#include <stdio.h>

int main(){
    int a = 4; // type declaration instruction -> which declares the type of a variable
    int b, c; // declared but not initialized

    // printf(b); 
    b = c = a;
    printf("b: %d", b);
    printf("\nc: %d", c);
    return 0;
}