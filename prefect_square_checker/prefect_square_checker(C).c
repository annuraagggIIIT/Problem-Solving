#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num)
{
    if (num < 0)
    {
        return 0; // Negative numbers are not perfect squares
    }

    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num))
    {
        printf("%d is a perfect square.\n", num);
    }
    else
    {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
