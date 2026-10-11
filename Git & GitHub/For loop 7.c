//ODD number & their sum
#include<stdio.h>
int main()
{  int i,n,sum=0;
     printf("Please enter an odd number: ");
     scanf("%d",&n);
     for(i=1;i<=n;i=i+2){
        sum=sum+i;
     }
     printf("The sum of odd numbers: %d\n", sum);

}
