#include<stdio.h>
int main(void)
{
int n, i, sum = 0;
scanf("%d",&n);
for(i=1; i <= n; ++i)
{
sum = sum+i;
}
printf("Sum=%d",sum);
return 0;
}