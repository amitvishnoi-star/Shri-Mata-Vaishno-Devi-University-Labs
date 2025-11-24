// Write A C program To make Calculator Performing + , - , / ,* Using Switch Case.
#include <stdio.h>

int main(void)
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("%f + %f = %f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%f - %.2f = %f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%f * %f = %f\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("%f / %f = %f\n", num1, num2, result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}
