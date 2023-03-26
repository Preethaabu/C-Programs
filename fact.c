#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("Enter the term:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("Factorial of number is %d",fact);
	return 0;
}
