#include<stdio.h>
int main()
{
	int a,n,b=0;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		b++;
	}
	printf("%d",b);
	return 0;
}
	
	

