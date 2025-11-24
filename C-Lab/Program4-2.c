/* Write A C programme to print a pattern :
      1
    1 2 1
  1 2 3 2 1 
1 2 3 4 3 2 1 */
#include <stdio.h>
int main()
{
    int i, j, k, num, space;
    for (i = 1; i <= 4; i++)
    {
        // Print leading spaces
        for (space = 4; space > i; space--)
        {
            printf("  "); // Two spaces for better alignment
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}