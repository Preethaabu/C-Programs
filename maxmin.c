#include<stdio.h>
int max,min,a[50];
void maxmin(int i,int j);
void maxmin(int i,int j)
{
	int max1,min1,mid;
	if(i==j)
	{
		max=min=a[i];
	}
	else
	{
		if(i==j-1)
		{
			if(a[i]<a[j])
			{
				max=a[j];
				min=a[i];
			}
			else
			{
				max=a[i];
				min=a[j];
			}
			
		}
		else
		{
			mid=(i+j)/2;
			maxmin(i,mid);
			max1=max;
			min1=min;
			maxmin(mid+1,j);
			if(max<max1)
			{
				max=max1;
			}
			if(min>min1)
			{
				min=min1;
			}
			
		}
	}
}
int main()
{
	int i,n;
	printf("num:");
	scanf("%d",&n);
	printf("elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	maxmin(1,n);
	printf("max:%d",max);
	printf("min:%d",min);
	return 0;
	
}
