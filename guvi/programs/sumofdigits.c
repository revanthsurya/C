#include <stdio.h>
int main(void) {
	int n,digit,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		sum+=digit;
		n/=10;
	}
	printf("\n %d",sum);
	return 0;
}
