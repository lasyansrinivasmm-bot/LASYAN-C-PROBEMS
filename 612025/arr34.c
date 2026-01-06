#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is maximum
    int max = arr[0];

    // Find maximum element
    for (i = 1; i < n; i++) {
        if (arr[i] < max) {
            max = arr[i];
        }
    }

    // Print maximum value
    printf("%d", max);

    return 0;
}