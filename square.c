#include<stdio.h>
int main()
{
int p,q,r,s;
scanf("%d",&p);
q=p%10;
r=p/10;
s=(q*q)+(r*r);
printf("%d",s);
return 0;
}
