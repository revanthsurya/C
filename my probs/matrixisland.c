#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
int main(void) {
	int i,j,sum=0,sum1=0,count=0;
	int M,N;
	printf("\n Enter no. of Rows: \n");
	scanf("%d",&M);
	printf("\n Enter no. of Cloumns: \n");
	scanf("%d",&N);
	int arr[M][N];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<M;i++){
	  //  count=0;
		for(j=0;j<N;){
			if(arr[i][j]=='1'){
				count++;
				}
				j++;
			
		}
		/*if(count%2==0){
				//sum=count/2;
				printf("%d\n",count/2);
			}
		else{*/
				sum=count/2;
				printf("%d\n",sum);
			//}
		
	}
	//sum1=sum1+sum;
	//printf("%d",sum1);
	return 0;
}
