#include <stdio.h>
int main(void) {
int a,n,d,tn,s=0;	
scanf("%d %d %d",&a,&n,&d);
s = (n * (2 * a + (n - 1)* d ))/ 2;
printf("%d\n",s);
return 0;
}
