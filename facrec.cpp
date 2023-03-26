#include<stdio.h>
 int fact(int);
int main()
{
	int n,f;
	printf("Enter the number:");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of number %d is %d",n,f);
	return 0;
}
 int fact(int f)
{
	if(f==0)
	{
		return 1;
	}
	else
	{
		return f*fact(f-1);
	}
}
