#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  int arr[] = {120, 34, 25, 12, 22, 11, 90};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  bubbleSort(arr, size);

  printf("\nArray in descending order: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
