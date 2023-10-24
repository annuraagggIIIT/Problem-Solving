/*to calculate factorial of a number*/
#include<stdio.h>
int main()
{
	int i,f,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(f=1,i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is %d",n,f);
	return 0;
}