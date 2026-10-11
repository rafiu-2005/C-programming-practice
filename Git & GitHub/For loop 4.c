// Print Sum of 1-n
#include<stdio.h>
int main(){

     int sum=0,i,N;
     scanf("%d",&N);
     for(i=1; i<=N;i++){
        sum=sum+i;
     }
     printf("sum=%d\n", sum);


}
