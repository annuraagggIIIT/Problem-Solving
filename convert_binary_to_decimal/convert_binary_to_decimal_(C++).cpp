#include <iostream>
#include <math.h>
using namespace std;
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
    cout<<"Enter the binary number to convert (including 8 numbers): ";
    cin>>binarynum;
 
    cout<<endl<<"The binary number after being converted to decimal is: "<<binaryToDecimal(binarynum);
    cout<<"\n--------------------------------\n";
}
