#include <stdio.h>

int main() {
    int N, i;
    int arr[100];

    scanf("%d", &N);

    // Store numbers in array
    for (i = 0; i < N; i++) {
        arr[i] = N - i;
    }

    // Print array elements
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}