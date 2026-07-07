// area of rectangle using:

#include <stdio.h>

int main()
{
    // 1.) hard coded values
    int length = 10;
    int width = 15;
    int area = length * width;

    printf("area of rectangle: %d", area);

    // values given by user
    printf("\nenter the values of length and width: \n");
    int l, b;
    scanf("%d %d", &l, &b);

    float _area = l * b;
    printf("area of rectangle: %f", _area);
    return 0;
}
