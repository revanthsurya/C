#include<stdio.h>
int main(void)
{
int r;
scanf("%d", &r);
if ((r % 400) == 0)
printf(" leap year.\n",r);
else if ((r % 100) == 0)
printf(" not aleap year.\n",r);
else if ((r % 4) == 0)
printf(" leap year.\n",r);
else
printf(" not a leap year \n",r);
return 0;
}
