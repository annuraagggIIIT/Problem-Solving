#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n;

    // Get the number of rows for the diamond pattern
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    // Check if the entered number is even; if so, increment it
    if (n % 2 == 0) {
        n++;
        cout << "Adjusted to " << n << " for better symmetry." << endl;
    }

    // Function call to print the diamond pattern
    printDiamond(n);

    return 0;
}
