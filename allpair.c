#include<stdio.h>
void all_path();
int cost[20][20],n;
int main() {
int i,j;

printf("ALL PAIR SHORTEST PATH");
printf("\nEnter the number of nodes");
scanf("%d",&n);
printf("\nEnter the cost matrix");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
}
}
all_path();
return 0;
}
void all_path()
{
int i,j,k,a[20][20];
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
printf("STEP:%d\n",k);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
}
}
