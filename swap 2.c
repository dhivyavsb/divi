#include<stdio.h>
int main()
{
int p,q;
scanf("%d%d",&p,&q);
printf("before swap values p=%d,q=%d",p,q);
q=q^p;
p=q^p;
q=q^p;
printf("After swap values p=%d,q=%d",p,q);
return 0;
}
