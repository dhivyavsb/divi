#include<stdio.h>
#include<string.h>
int main()
{
int a;
char c[30];
scanf("%s",c);
a=strlen(c);
if(a%2==1)
{
printf("prime");
}
else
{
printf("not prime");
}
return 0;
}
