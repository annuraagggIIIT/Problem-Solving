#1 
#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows (should be an odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for a proper diamond pattern.\n");
        return 1;
    }

    space = n / 2;

    // Upper part of the diamond
    for (i = 1; i <= n; i += 2) {
        // Print spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
        space--;
    }

    space = 1;

    // Lower part of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        // Print spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
        space++;
    }

    return 0;
}
