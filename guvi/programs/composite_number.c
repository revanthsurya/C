#include <stdio.h>
int main(void) {
	int n,count=0;
	scanf("%d",&n);
            for(int i=1;i<n;i++)
            {
            	if(n%i==0)
            	{
            		count++;
            	}
            }
            if(count>1)
            {
            	printf("yes");
            }
            else
            {
	printf("No");
            }
	return 0;
            	
            }
