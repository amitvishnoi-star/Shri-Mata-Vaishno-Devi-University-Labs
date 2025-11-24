// Write A C Programme To Swap Two Numbers Without Using A Temporary Variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without a temporary variable
    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract new 'b' from 'a' to get original 'a'
    a = a - b; // Step 3: Subtract new 'b' from new 'a' to get original 'b'

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}