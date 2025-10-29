// Write A C Programme To Find The Multiplication Table of a Number Using while loop.
#include <stdio.h>
int main()
{
    int n, i = 1;

    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}