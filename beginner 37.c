#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("before swap values a=%d,b=%d",a,b);
b=b^a;
a=b^a;
b=b^a;
printf("After swap values a=%d,b=%d",a,b);
return 0;
}
