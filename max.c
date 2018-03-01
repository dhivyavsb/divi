#include<stdio.h>
int main()
{
int a[10],i,max;
for(i=1;1<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;a[i]<10;i++)
{
if(a[i]>max)
{
max=a[i];
printf("%d",a[i]);
}
}
return 0;
}
