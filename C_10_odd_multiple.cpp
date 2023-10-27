#include <stdio.h>


// Function to calculate the first 10 odd multiples
int* oddMultiples(int input, bool show=true) {
    int factor = 1;
    int count = 0;
    int odd_mul[10];
	// check if input is even there is no odd multiple 
    if (input % 2 == 0) {
    	printf("Input is even. Please enter an odd integer.\n");
        return NULL; // Return NULL if the input is even
    } else {
    	printf("The first 10 odd multiples of %d are: \n", input);
        while (count < 10) {
            int multiple = input * factor;
            if (multiple % 2 != 0) {
                odd_mul[count] = multiple;
                if (show) {
                    printf("%d\n", multiple);
                }
                count++;
            }
            factor++;
        }
    }

    return odd_mul;
}

int main() {
    int input;

    printf("Enter an input integer: ");
    scanf("%d", &input);

    int* odd_multiple = oddMultiples(input); // Call the function, pass false if you do not want to show result

    return 0;
}
