#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int maxInRest = findMax(arr, n - 1);

    return (maxInRest > arr[n - 1]) ? maxInRest : arr[n - 1];
}

int findMin(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int minInRest = findMin(arr, n - 1);

    return (minInRest < arr[n - 1]) ? minInRest : arr[n - 1];
}

int main() {
    printf("Enter Array Size\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elements\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int maxElement = findMax(arr, n);
    int minElement = findMin(arr, n);

    printf("Maximum element in the array: %d\n", maxElement);
    printf("Minimum element in the array: %d\n", minElement);

    return 0;
}
