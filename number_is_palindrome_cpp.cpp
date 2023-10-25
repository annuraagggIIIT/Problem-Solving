#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin >> number;

    int copy = number;
    int reverse_number = 0;

    while(copy!=0){
        reverse_number = reverse_number*10 + (copy%10);
        copy = copy/10;
    }

    if(number == reverse_number){
        cout << "Number is Palindrome" << endl;
    }
    else{
        cout << "Number isn't Palindrome" << endl;
    }

    return 0;
}