#include<stdio.h>
int main()
{
	int i,p=30,q=50;
	printf("print the even number for the given range p to q:\n");
	for(i=p;i<=q;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
	return 0;
}
