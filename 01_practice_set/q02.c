#include <stdio.h>

int main()
{
    // calculate the area of a circle
    int r = 20;
    float area_circle = 3.14 * r * r;
    printf("area of circle is %f", area_circle);

    // volume of cylinder having same circle
    int h = 50;
    float vol_cylinder = 3.14 * r * r * h;
    printf("\nvolume of cylinder is %f", vol_cylinder);
    return 0;
}