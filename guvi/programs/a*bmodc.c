#include <stdio.h>
int main(void) {
    int a,b,c,res;
    scanf("%d %d %d",&a,&b,&c);
    res=(a*b)%c;
    printf("\n%d",res);
    return 0;
}
