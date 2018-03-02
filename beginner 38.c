#include<stdio.h>
int main()
{
int l,k;
scanf("%d%d",&l,&k);
printf("before swap values l=%d,k=%d",l,k);
k=k^l;
l=k^l;
l=k^l;
printf("After swap values l=%d,k=%d",l,k);
return 0;
}
