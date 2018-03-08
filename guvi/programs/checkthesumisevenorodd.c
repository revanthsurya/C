#include <stdio.h>
int main(void) {
	int n,m,a;
	scanf("%d %d",&n,&m);
	a=n+m;
	if(a%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
