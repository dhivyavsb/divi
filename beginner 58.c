#include<stdio.h>
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("before swap values m=%d,n=%d",m,n);
n=n^m;
m=n^m;
n=n^m;
printf("After swap values m=%d,n=%d",m,n);
return 0;
}
