#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year you want to check");
	scanf("%d",&year);
	if((year%4==0) && (year%400==0) || (year%100!=0))
	{
		printf("The given year is a leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	return 0;
}
