#include<stdio.h>
int main()
{
	int l,m,n,o;
	scanf("%d%d%d",&l,&m,&n);
	o=(l*m)%n;
	printf("%d",o);
	return 0;
}
