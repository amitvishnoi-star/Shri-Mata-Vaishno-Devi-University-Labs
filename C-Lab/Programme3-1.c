// Write A C Programme To find Sum of Digits of a 4 Digit Number.
#include <stdio.h>
int main()
{
    int number, digit, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    while (number < 1000 || number > 9999) {
        printf("Invalid input! Please enter a 4-digit number: ");
        scanf("%d", &number);
    }

    sum = 0;
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
// This Programme Can be used to find Sum of Digits of any Digit by just changing the validation condition  of main function.