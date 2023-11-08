#include <stdio.h>
#include <math.h>

int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
 
int main()
{
    long binarynum;
    int decimalnum = 0, temp = 0, remainder;
    
    printf("Enter the binary number to convert (including 8 numbers):");
    scanf("%ld",&binarynum);
    
    while (binarynum!=0){
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    
 	printf("The binary number after being converted to decimal is: %ld \n", decimalnum);
    printf("\n--------------------------------\n");
}
