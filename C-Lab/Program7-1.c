// Write A C program to Find Frequency of each element in an array.
#include <stdio.h>
int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Calculate frequency of each element
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store frequency
        }
    }

    // Display frequency of each element
    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}