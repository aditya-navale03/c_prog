#include<stdio.h>
#include<stdlib.h>

int main() {
    int *a, sum = 0;
    int n, i;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    // Allocate memory for the array
    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }

    printf("Elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum = sum + *(a + i);
    }

    printf("\nSum of elements: %d\n", sum);

    // Free allocated memory
    free(a);

    return 0;
}
