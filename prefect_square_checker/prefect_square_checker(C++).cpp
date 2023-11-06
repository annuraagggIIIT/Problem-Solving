#include <iostream>
#include <cmath>

bool isPerfectSquare(int num)
{
    if (num < 0)
    {
        return false; // Negative numbers are not perfect squares
    }

    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPerfectSquare(num))
    {
        std::cout << num << " is a perfect square." << std::endl;
    }
    else
    {
        std::cout << num << " is not a perfect square." << std::endl;
    }

    return 0;
}
