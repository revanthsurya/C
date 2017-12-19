

#include <stdio.h>
int count =0;
int main(void){
   if(count==0)
   {
    int count=1;
    while(++count<=8)
    {
        printf("%d\n",count);
    }
   }
printf("%d",count);
}
