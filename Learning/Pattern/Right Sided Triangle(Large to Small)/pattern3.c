#include <stdio.h>
#include <math.h>
int main(){
   int n, row, col;
   printf("Enter N = ");
   scanf("%d", &n);
   for (row = n; row >= 1; row--){
      // we want to make the triangle like
      // 1 2 3
      // 1 2
      // 1
      // thats why we take row value from large thats why we take n(n=3)
      for (col = 1; col <= row; col++){
         printf("%d ", col%2);
            // column value is not changed coz that is always 3
            // so we need not to change second for loop
      }
      printf("\n");
   }
}
