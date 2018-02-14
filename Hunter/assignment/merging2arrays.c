#include <stdio.h>

int main()
{
    int n,a[50],b[50],n1,n2,larg[50],i,j,k;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        larg[i]=a[i];
    }
    n=n1+n2;
    for(i=0,k=n1;k<n&&i<n2;i++,k++)
    {
        larg[k]=b[i];
    }
    printf("after merging \n");
    for(i=0;i<n;i++)
    {
        printf("%d",larg[i]);
    }
    return 0;
}
