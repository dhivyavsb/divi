#include<stdio.h>
int main()
{
int a, b, c,d,e;
scanf("%d",&a);
b=a%10;
c=a/10;
d=c%10;
e=c/10;
printf("%d\t%d\t%d\t",e,d,b);
return 0;
}
