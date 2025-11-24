//Write A C Programme To Convert Celsius To Fahrenheit And Fahrenheit To Celsius.
#include <stdio.h>
int main() 
{
    float celsius, fahrenheit;

    // Convert Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);

    // Convert Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("%f Fahrenheit = %f Celsius\n", fahrenheit, celsius);

    return 0;
}