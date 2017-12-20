#include<stdio.h>
#include<string.h>
int main(void)
{int a[20],b,i=0,k;
 char rom[2];
 scanf("%s",rom);
 b=strlen (rom);
 for(i=0;i<b;i++)
 {
  if(rom[i]=='I')
  a[i]=1;
  else if(rom[i]=='V')
  a[i]=5;
  else if(rom[i]=='X')
  a[i]=10;
 }
k=a[b-1];
for(i=b-1;i>0;i--)
{
if(a[i]>a[i-1])
k=k-a[i-1]; 
else if(a[i]==a[i-1] || a[i]<a[i-1])
k=k+a[i-1];
}printf("%d",k);
return 0;
}
