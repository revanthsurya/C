#include<stdio.h>
int main(void)
{
int r;
scanf("%d", &r);
if ((r % 400) == 0)
printf("%d is a leap year.\n",r);
else if ((r % 100) == 0)
printf("%d is a not leap year.\n",r);
else if ((r % 4) == 0)
printf("%d is a leap year.\n",r);
else
printf("%d is not a leap year \n",r);
return 0;
}
