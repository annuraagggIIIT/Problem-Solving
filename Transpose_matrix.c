#include<stdio.h>
int main()
{
  int n; 
  int temp=0;
  // take number of rows and columns
  printf("Enter number of row and column: ");
  scanf("%d",&n);

  // declare array by given number of rows and columns
  int arr[n][n], i, j;

  // take array elements as input
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    // 1 2 3
    // 4 5 6

    // 1 4
    // 2 5
    // 3 6
    printf("\n");
  }

  // display array (optional)
  printf("Entered Transpose of the Array:\n");
  for(i=0;i<n;i++)
  {
    for ( j = i; j < n; j++)
    {
        // swap arr[i][j] = arr[j][i]
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    }
    printf("\n");
}
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
    
  }
    
return 0;
}