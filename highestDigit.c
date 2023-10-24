#include <stdio.h>

int findHighestDigit(int number) {
    int highestDigit = 0;

    number = (number < 0) ? -number : number;

    while (number > 0) {
        int currentDigit = number % 10;

        if (currentDigit > highestDigit) {
            highestDigit = currentDigit;
        }

        number /= 10;
    }

    return highestDigit;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    int highest = findHighestDigit(number);
    printf("The highest digit in %d is %d\n", number, highest);
    
    return 0;
}
