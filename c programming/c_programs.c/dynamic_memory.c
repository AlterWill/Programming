#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14

int main() {
    int n;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) { // Corrected comparison
        printf("Failed memory allocation\n");
        return 1;
    }

    // Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print elements
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}