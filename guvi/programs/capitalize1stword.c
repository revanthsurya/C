#include <stdio.h>
int main()
{
	char str[50];	
	int i;
	scanf("%[^\n]s",str); 
	for(i=0; str[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; 
			continue; 
		}
		if(str[i]==' ')
		{
			++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; 
				continue; 
			}
		}
		
	}
	
	printf("\n %s",str);
	
	return 0;
}