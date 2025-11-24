// Write A C Programme To Reverse a 3 Digit Number Using While Loop.
#include <stdio.h>
int main()
{
    int number, reversedNumber = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    while (number < 100 || number > 999) {
        printf("Invalid input! Please enter a 3-digit number: ");
        scanf("%d", &number);
    }

    while (number != 0) {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number = number / 10;
    }

    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
// This Programme Can be used to Reverse any Digit by just changing the validation condition  of main function.