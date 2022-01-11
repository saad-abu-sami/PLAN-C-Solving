#include <stdio.h>

int square(int x){
   int y;
   y = x * x;
   return y;
}
int main(){
   int a, sq;
   scanf("%d", &a);
   sq = square(a);
   printf("The Square of %d is : %d\n",a , sq);
   return 0;
}