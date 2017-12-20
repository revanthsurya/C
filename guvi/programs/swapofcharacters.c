#include <stdio.h>

int main(void) {
	char a[20];
	int i,j,temp=0;
	gets(a);
	i=strlen(a);
	for(j=0;j<i;j+=2)
	{
	 if(a[j+1]!='\0')
	 {
	 temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
	}
	}
	printf("%s",a);
	return 0;
}
