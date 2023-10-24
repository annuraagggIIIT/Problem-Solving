#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;  
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 
    int sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            return false;  // num is divisible by some number other than 1 and itself
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
