#include<stdio.h>
int main()
{
int a[20],i,j,m,rem;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<=m;j++)
{
if(a[i]>a[j])
{
rem=a[i];
a[i]=a[j];
a[j]=rem;
}
}
}
for(i=m;i>=1;i--)
{
printf("%d",a[i]);
}
return 0;
}
