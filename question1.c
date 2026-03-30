#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *malloc_arr;
    int *calloc_arr;

    // Using malloc: Allocates memory for 5 integers (uninitialized)
    malloc_arr = malloc(n * sizeof(int));
    if (malloc_arr == NULL) {
        printf("Memory allocation failed for malloc.\n");
        return 1;
    }

    // Using calloc: Allocates memory for 5 integers and initializes to 0
    calloc_arr = calloc(n, sizeof(int));
    if (calloc_arr == NULL) {
        printf("Memory allocation failed for calloc.\n");
        free(malloc_arr);
        return 1;
    }

    printf("Values in malloc_arr (expected garbage, but might be 0): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", malloc_arr[i]); 
    }

    printf("\nValues in calloc_arr (initialized to 0): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", calloc_arr[i]);
    }
    printf("\n");

    // Always free dynamically allocated memory
    free(malloc_arr);
    free(calloc_arr);

    return 0;
}