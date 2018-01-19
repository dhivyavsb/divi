# include<stdio.h>
main()
{
int m,count=0;
scanf("%d",&m);
while(m>=0)
{
m=m/10;
++count;
}
printf("%d",count);
}
