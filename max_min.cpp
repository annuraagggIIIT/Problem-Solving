#14
#include <iostream>
#include <climits>

void findMaxMin(int arr[], int start, int end, int &max, int &min) {
    if (start == end) {
        max = arr[start];
        min = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    int max1, min1, max2, min2;

    findMaxMin(arr, start, mid, max1, min1);
    findMaxMin(arr, mid + 1, end, max2, min2);

    max = (max1 > max2) ? max1 : max2;
    min = (min1 < min2) ? min1 : min2;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6, 2, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximum, minimum;

    findMaxMin(arr, 0, n - 1, maximum, minimum);

    std::cout << "Maximum Element: " << maximum << std::endl;
    std::cout << "Minimum Element: " << minimum << std::endl;

    return 0;
}
