/*
 * C++ Program to Print Diamond Pattern
 */

#include <iostream>

int main() {
    // Declare variables
    int n;

    // Get the number of rows for the diamond
    std::cout << "Enter the number of rows for the diamond pattern: ";
    std::cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            std::cout << " ";

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
            std::cout << "*";

        // Move to the next line after each row
        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            std::cout << " ";

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
            std::cout << "*";

        // Move to the next line after each row
        std::cout << std::endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}
