#include<stdio.h>
int main()
{
int f=0,g=1,s,n,i;
scanf("%d",&n);
printf("%d\n%d\n",f,g);
for(i=1;i<n-1;i++)
{
s=f+g;
printf("%d\n",s);
f=g;
g=s;
}
return 0;
}
