#include <stdio.h>
int main()
{
	int a,s,q;
	scanf("%d",&a);
	while(a>0)
	{
		s=a%10;
		q=a/10;
		a=q;
		printf("%d",s);
	}
	return 0;
}
