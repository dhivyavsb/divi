#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i;
scanf("%d",&n);
printf("%d\n%d\n",a,b);
for(i=1;i<n-1;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
return 0;
}
