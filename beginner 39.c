#include<stdio.h>
int main()
{
int c[10],i,max;
for(i=1;1<10;i++)
{
scanf("%d",&c[i]);
}
max=c[0];
for(i=1;c[i]<10;i++)
{
if(c[i]>max)
{
max=c[i];
printf("%d",c[i]);
}
}
return 0;
}
