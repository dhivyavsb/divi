#include<stdio.h>
int main()
{
int i,j,a[50][50],n,m1=0,m2=0,sum;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[50][50]);
}
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==j)
{
m1=m1*a[i][j];
}
if(j==(n-i+1))
{
m2=m2*a[i][j];
}
}
}
sum=m1+m2;
printf("%d",sum);
return 0;
}

