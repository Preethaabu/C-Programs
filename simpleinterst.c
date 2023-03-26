#include<stdio.h>
int main()
{
	float si,prin,time,rate;
	printf("Enter the principal amount:");
	scanf("%f",&prin);
	printf("Enter the time limit");
	scanf("%f",&time);
	printf("Enter the rate");
	scanf("%f",&rate);
	si=(prin*time*rate)/100;
	printf("Simple Interest of the amount is %f",si);
	return 0;
	
}
