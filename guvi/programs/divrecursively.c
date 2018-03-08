#include <stdio.h>
int main(void) 
{
	int n,i;
	scanf("%d",&n);
	int n1,r;
	while(n!=1)
	{
	r=n%2;
	n1=n/2;
	printf("\n %d",n1);
	n=r;
	break;
	}
	return 0;
}
