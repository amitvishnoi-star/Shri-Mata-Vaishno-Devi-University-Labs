// Write A c programme To print Fibonacci series up to N terms Using loops.
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Validate input
    while (n <= 0) {
        printf("Invalid input! Please enter a positive integer: ");
        scanf("%d", &n);
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}