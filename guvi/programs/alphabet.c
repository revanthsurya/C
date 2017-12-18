#include<stdio.h>
int main(void)
{
char a;
scanf("%c",&a);
if(a>='a'&& a<='z'||a>='A'&& a<='Z')
{
printf("alphabet");
}
else 
{
printf("not an alphabet");
}
return 0;
}
