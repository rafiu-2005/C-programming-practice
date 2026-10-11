//display the multiplication table for a given integer
#include<stdio.h>
int main()
{
    int N,i;
    printf("Please enter an integer: ");
    scanf("%d",&N);
    for(i=1; i<=10;i++){
        printf("%d x %d=%d\n", i,N,i*N);
    }

}
