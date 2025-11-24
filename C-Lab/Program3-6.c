// Write A C Programme To Find The Factorial of a Number Using while loop.
#include <stdio.h>
int main()
{
    int n, i = 1;
    float factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    while (n < 0) {
        printf("Invalid input! Please enter a positive integer: ");
        scanf("%d", &n);
    }
    if(n==0){
        printf("Factorial of 0 = 1\n");
        return 0;
    }
    else
    {
    while (i <= n) {
        factorial *= i; 
        i++;
    }
    printf("Factorial of %d = %f\n", n, factorial);
}
    return 0;
}