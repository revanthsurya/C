#include <stdio.h>
int main(void) 
{
	int n1,n2;
	for(int i=0;i<3;i++)
	{
		scanf("%d %d \n",&n1,&n2);
		printf("%d",n2-n1);
	}
	return 0;
}
