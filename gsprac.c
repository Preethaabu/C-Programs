#include<stdio.h>
void greedyks(int,int);
float p[10],w[10],x[10],r[10];
int main()
{
	int i,n,max,temp,temp1;
	printf("no:");
	scanf("%d",&n);
	printf("max");
	scanf("%d",&max);
	printf("profit,weights:");
	for(i=1;i<=n;i++)
	{
		scanf("%f%f",&p[i],&w[i]);
	}
	for(i=1;i<n;i++)
	{
		r[i]=p[i]/w[i];
	}
	for(i=1;i<=n;i++)
	{
		if(r[i]>r[i+1])
		{
			temp=w[i+1];
			w[i]=w[i+1];
			w[i+1]=temp;
			
			temp1=p[i+1];
			p[i]=p[i+1];
			p[i+1]=temp;
		}
	}
	greedyks(max,n);
	}
	void greedyks(int max,int n)
	{
		int i;
		float p1[10],cu,profit;
		for(i=1;i<=n;i++)
		{
			x[i]=0;
		}
		cu=max;
		for(i=1;i<=n;i++)
		{
			if(w[i]>cu)
			{
				break;
			}
			else
			{
				x[i]=1;
				cu=cu-w[i];
			}
		}
		if(i<=n)
		{
			x[i]=cu/w[i];
		}
		profit=0.0;
		for(i=1;i<=n;i++)
		{
			p1[i]=p[i]*x[i];
			printf("profit %d:%f",i,p1);
		}
		
		for(i=1;i<=n;i++)
		{
			profit=profit+p1[i];
		}
		printf("total profit:%f",profit);
	}

