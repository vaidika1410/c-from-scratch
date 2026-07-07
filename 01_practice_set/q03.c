#include <stdio.h>

int main(){
    // celcius to farenheit conversion
    printf("enter celcius value: ");
    float celcius = scanf("%f", &celcius);

    float far = (celcius * 9 / 5) + 32;
    printf("farenheit value is %f", far);
    return 0;
}