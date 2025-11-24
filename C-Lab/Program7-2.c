// Write A C program to rotate an array Left and Right by 1 posiotion.
#include <stdio.h>
int main() {
    int arr[100], left[100], right[100], n, i;

    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("Array after left rotation by 1 position:\n%d\n", arr[0]);
        printf("Array after right rotation by 1 position:\n%d\n", arr[0]);
        return 0;
    }
    for (i = 0; i < n; i++) {
        left[i] = arr[(i + 1) % n];
    }
    for (i = 0; i < n; i++) {
        right[i] = arr[(i - 1 + n) % n];
    }

    printf("Array after left rotation by 1 position:\n");
    for (i = 0; i < n; i++) printf("%d ", left[i]);
    printf("\n");

    printf("Array after right rotation by 1 position:\n");
    for (i = 0; i < n; i++) printf("%d ", right[i]);
    printf("\n");

    return 0;
}