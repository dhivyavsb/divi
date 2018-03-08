#include<stdio.h>
int main()
{
	int p,q,r;
	scanf("%d%d",&p,&q);
	r=p-q;
	if(r%2!=0)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	return 0;
}
