//Display n number of multiplication table vertically

#include<stdio.h>
int main(){
      int n,i,j;
      printf("Please Enter a number: ");
      scanf("%d",&n);
      for(i=1; i<=10;i++){
            for(j=1;j<=n;j++){
                printf("%d x %d=%d,", j,i,i*j);
            }
        printf("\n");
      }

}
