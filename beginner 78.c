#include<stdio.h>
int main()
{
	int p;
	scanf("%d",&p);
	if(p%13==0)
	{
		printf("%d is multiple of 13",p);
	}
	else
	{
		printf("%d is not multiple of 13",p);
	}
	return 0;
}
