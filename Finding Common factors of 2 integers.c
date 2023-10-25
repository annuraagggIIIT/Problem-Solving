#include<stdio.h>
int main()
{
	int a,b,i,lower,t=0;
	
	//getting user input for 2 integers
	printf("Enter a 2 integers whose common factors are to be found");
	scanf("%d %d",&a,&b);
	
	//finding the least of the two integers
	if (a<b)
		lower=a;
	else
		lower=b;
		
	// initialising array where the factors are to be stored
	int arr[lower];
	
	//iterating for every integer from 0 to the least number to find the common factors 
	//checking the condition using if condition
	//adding the factors to the array inside the loop
	for(i=0;i<lower;i++)
	{
		if (a%(i+1)==0 && b%(i+1)==0)
			{
				arr[t]=i+1;
				t++;
			}
			
	}
	
	printf("Common factors of %d and %d are :",a,b);
	//printing each factor stored in the array
	for(i=0;i<t;i++)
		printf("%d  ",arr[i]);
	
	return 0;
}