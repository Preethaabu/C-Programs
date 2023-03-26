#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the elements");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of the matrix are:");
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	  {
	  	printf("%d",a[i][j]);
		  }	
	}
}
