# include<stdio.h>
main()
{
int digit,num,temp,sum;
scanf("%d",&num);
temp=num;
while(num>=1)
{
digit=temp%10;
sum=sum*10*digit;
temp=temp%10;
}
printf("%d",sum);
if(sum==num)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
