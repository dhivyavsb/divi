#include <stdio.h>
int main()
{	
	int p,q,i,c=0;
	scanf("%d %d",&p,&q);
	for(i=1;i<=100;i++)
	if(p%i==0)
	{
	if(q%i==0)
	{
	++c;
	if(c>1)
	printf("%d",i);
	}
	}
	return 0;
}
