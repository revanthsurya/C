#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int len,counter=0;
scanf("%s",str);
len=strlen(str);
for(int i=0;i<len;i++)
{
if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
{
	counter++;
}
}
if(counter>=1)
{
	printf("yes");
}
else
{
	printf("No");
}

return 0;
}
