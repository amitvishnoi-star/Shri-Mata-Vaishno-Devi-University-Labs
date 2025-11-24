// Write A C program To print the cube of a NUmber using pow() function.
#include <stdio.h>
#include <math.h>
int main(){
    float n , cube;
    printf("Enter A number : ");
    scanf("%f", &n);
    cube=pow(n,3);
    printf("Cube of %f is %f",n,cube);
    return 0;
}