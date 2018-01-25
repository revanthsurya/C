#include <stdio.h>

int main(void) {
	int arr[20],n,pro=1,num,op[20];
	scanf("%d",&n);
	for(int i;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j;j<n;j++)
	{
		pro*=arr[j];
	}	
	for(int j;j<n;j++)
	{
		
		num=pro/arr[j];
		op[j]=num;
	}
    for(int j;j<n;j++)
	{
		
		printf("%d ",op[j]);
	}

	return 0;
}
