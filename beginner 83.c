#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&b,&c,&a);
	switch(a)
	{
		case 1:
		printf("%d",b/c);
		break;
		case 2:
		printf("%d",b%c);
		break;
		default:
		printf("none");
		break;
	}
	return 0;
}
