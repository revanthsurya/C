#include <stdio.h>
int main(void) {
	int a,b,temp=0;
	scanf("%d \n %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d \n %d",a,b);
	return 0;
}
