#include<stdio.h>
int a[50],n;
void mergesort(int,int);
void merge(int,int,int);
int main()
{
	int i,j,k,low,high;
	printf("no:");
	scanf("%d",&n);
	printf("elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	low=1;
	high=n;
	mergesort(low,high);
	printf("list:");
	for(k=1;k<=n;k++)
	{
		printf("%d\n",a[k]);
	}
}

void mergesort(int low,int high)
{

int mid;
if(low<high)
{
	mid=((low+high)/2);
	mergesort(low,mid);
	mergesort(mid+1,high);
	merge(low,mid,high);
}
}

void merge(int low,int mid,int high)
{
	int i,j,k,h,b[50];
	i=low;
	h=low;
	j=mid+1;
	while((h<=mid)&&(j<=high))
	{
		if(a[h]<a[j])
		{
			b[i]=a[h];
			h=h+1;
		}
		else
		{
			b[i]=a[j];
			j=j+1;
		}
		i=i+1;
	}
	if(h>mid)
	{
		for(k=j;k<=high;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
		
	}
	else
	{
		for(k=h;k<=mid;k++)
		{
			b[i]=a[h];
			i=i+1;
		}
	}
	printf("sorting order:");
	for(k=low;k<=high;k++)
	{
		a[k]=b[k];
		printf("%d\n",a[k]);
	}
	
}
