#include <stdio.h>
int main(void) {
int arr[20],n,i,temp=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d\n",&arr[i]);
}
for(i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
printf("%d\n",arr[0]);
return 0;
}
