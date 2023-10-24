//To print all fibonacci numbers til n
#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int n;
    printf("Enter the integer: ");
    scanf("%d",&n);
    for (int i = 0; i <n; i++) {
        printf("%d\n",a);
        int c = a+b;
        a=b;
        b=c;
    }
