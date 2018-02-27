#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%2;
		n=n/2;
	printf("%d",a);
	}
	return 0;
}
