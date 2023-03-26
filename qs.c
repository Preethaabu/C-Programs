#include<stdio.h>

int main()
{
	int n,a[50],i;
	printf("no:");
	scanf("%d",&n);
	
	
	printf("elements");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
		quick(a,0,n-1);
	return 0;
}
void quick(int a[],int left,int right)
{
	int pivot,i,j,temp;
	if(left<right)
	{
		pivot=left;
		i=left;
		j=right;
		while(i<j)
		{
			while((a[i]<=a[pivot])&&(i<=right))
			{
				i++;
			}
			while(a[j]>a[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		
		quick(a,left,j-1);
		quick(a,j+1,right);
		
	}
}
