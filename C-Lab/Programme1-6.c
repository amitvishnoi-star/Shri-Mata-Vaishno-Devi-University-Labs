// Write A C Programme To Find The Area Of A Square And A Circle.
#include <stdio.h>
int main()
{
    float areaSquare, radius, side, areaCircle;
    float PI = 3.1416;
    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    areaSquare = side * side;
    printf("Area of the square: %.2f\n", areaSquare);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    areaCircle = PI * radius * radius;
    printf("Area of the circle: %.2f\n", areaCircle);
    return 0;
}