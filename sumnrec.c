#include<stdio.h>
int sum(int);
int main()
{
	int n,s;
	printf("Enter the number:");
	scanf("%d",&n);
	s=sum(n);
	printf("Sum of %d numbers is %d",n,s);
	return 0;
}

int sum(int s)
{
    if(s==1)
	{
		return 1;
	}
	else 
	{
					
	return s+sum(s-1);
}
}
