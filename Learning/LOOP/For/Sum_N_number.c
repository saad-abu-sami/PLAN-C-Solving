#include <stdio.h>
int main(){
   int n,sum=0,i;
   printf("Enter the last number of the series: ");
   scanf("%d",&n);
   printf("1+2+3+.....+%d",n);
   for(i=0;i<=n;i++){
      sum = sum + i;
   }
   printf(" = %d\n",sum);
}