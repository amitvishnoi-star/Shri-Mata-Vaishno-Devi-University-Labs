// Check Wether A triangle is valid or not Using if-else.
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180 ) {
        if (angle1<0 ){
            printf("The triangle is not valid.\n");
        }
        else if(angle2<0){
            printf("The triangle is not valid.\n");
        }
        else if(angle3<0)
        {
            printf("The triangle is not valid.\n");
        }
        else
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
}