#include<stdio.h>
void greedyks( int ,int);
float p[10],w[10];
float x[10],r[10];
int main()
{

int n,i,temp,temp1;
int max;
printf(" KNAPSACK");
printf("\n Enter the no.of weights");
scanf("%d",&n);
printf("\nEnter the max weight");
scanf("%d",&max);
printf("\nEnter the profit and weight");
for(i=1;i<=n;i++)
{
scanf("%f%f",&p[i],&w[i]);
}
for(i=1;i<=n;i++)
{
r[i]=p[i]/w[i];
printf("\n ratio %d:%f",i,r[i]);
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
p[i+1]=temp1;
}
} 

greedyks(max,n); 
return 0;
}
 void greedyks(int max,int n)
 
{
 int i;
 float profit,cu,p1[10];
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
 x[i]=(cu/w[i]);
 
}
 profit=0.0;
 for(i=1;i<=n;i++)
 
{

 p1[i]=p[i]*x[i];
 printf("\nprofit%d:%f",i,p1[i]);
 }
 for(i=1;i<=n;i++)
 {
 profit=profit+p1[i];
 }
 printf("\nthe total profit is:%f",profit);
 }
