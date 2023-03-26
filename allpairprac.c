#include<stdio.h>
void allpath();
int n,cost[50][50];
int main()
{
	int i,j;
	printf("nodes:");
	scanf("%d",&n);
	printf("cost matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		   scanf("%d",&cost[i][j]);	
		}
	}
	allpath();
	return 0;
}
void allpath()
{
  int i,j,k,a[50][50];
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=n;j++)
  	{
  		a[i][j]=cost[i][j];
	  }
  }
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]<(a[i][k]+a[k][j]))
				{
					a[i][j]=a[i][j];
				}
				else
				{
					a[i][j]=(a[i][k]+a[k][j]);
				}
			}
		}
	
	
	printf("step:%d\n",k);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

}
}
