#include<stdio.h>
#include<math.h>
int main()
{
int p,q,r,s;
long int l;
scanf("%d%d",&p,&q);
scanf("%ld",&l);
r=pow(p,q);
s=r%l;
printf("%d",s);
return 0;
}

