#include<stdio.h>
int main()
{
	int n,temp,rev=0,rem;
	printf("Enter the number you want to check:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	  rem=n%10;
	  rev=rev*10+rem;
	  n=n/10;	
	}
	if(temp==rev)
	{
		printf("The number is a palindrome");
	}
	else
	{
		printf("The number is not a palindrome");
	}
	return 0;
	
}
