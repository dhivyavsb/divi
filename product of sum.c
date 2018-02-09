#include<stdio.h>
int main()
{
int i,j,a[50][50],n,s1=0,s2=0,mul;
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
s1=s1+a[i][j];
}
}
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j==n-i+1)
{
s2=s2+a[i][j];
}
}
}
mul=s1*s2;
printf("%d",mul);
return 0;
}
