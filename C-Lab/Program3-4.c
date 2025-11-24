// Write A C Programme To Find The Sum of All Odd Numbers Between 1 to 100 Using while loop.
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    while (i <= 100) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    printf("Sum of all odd numbers between 1 and 100 is: %d\n", sum);

    return 0;
}
// This Programme Can be used to find Sum of N odd Numbers by just changing the validation condition of main function.