#include<stdio.h>
void sos(int,int,int);
int w[10],x[10],m;
int main()
{
	int i,n,r=0,k=1,s=0;
	printf("num:");
	scanf("%d",&n);
	printf("values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("max:");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		r=r+w[i];
	}
	sos(s,k,r);
	return 0;
}
void sos(int s,int k,int r)
{
	int j;
	x[k]=1;
	if((s+w[k])==m)
	{
		printf("solu");
		for(j=1;j<=k;j++)
		{
			printf("%d",x[j]);
			printf("\n");
		}
	}
	else if((s+w[k]+w[k+1])<=m)
	{
		sos((s+w[k]),(k+1),(r-w[k]));
	  	
	}
	if(((s+r-w[k])>=m)&&((s+w[k+1])>=m))
	{
		sos(s,k+1,(r-w[k]));
	}
}
