#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   int t, n;
   scanf("%d", &t);
   while (t--){
      // If we take 3 for t the loop will be run 3 times.
      scanf("%d", &n);
      printf("%d\n", (n - 1) / 2);
      // According to theory value of n 0,1,2 the answer is zero.
      // If we take n=4 , then b will get 1 and a will get 3.
      // So 3+1=4; b>a ;
   }
}
