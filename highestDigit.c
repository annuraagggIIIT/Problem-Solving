#include <stdio.h>


int findHighestDigit(long long  number) {
    long long  highestDigit = 0;

    number = (number < 0) ? -number : number;

    while (number > 0) {
        int currentDigit = number % 10;

        if (currentDigit > highestDigit) {
            highestDigit = currentDigit;
	    if (highestDigit == 9) break;
        }

        number /= 10;
    }

    return highestDigit;
}

int main() {
    long long number;
    
    printf("Enter a number: ");
    scanf("%lli", &number);

    int highest = findHighestDigit(number);
    printf("The highest digit in %lli is %d\n", number, highest);
    
    return 0;
}
