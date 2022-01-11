#include <stdio.h>
int maximum(int x[]){
   int i;
   int max = x[0];
   // it means array count from 0 index
   for ( i = 1; i < 5; i++) {
      if(max < x[i]) {
         // count if x[0] index greater than max
         max = x[i];
         // then print max = x[i] index greater than max
      }
   }
   return max;
}
int main(){
   int num[] = {1,2,3,4,5};
   int maximumValue = maximum(num);
   printf("Maximum value = %d\n", maximumValue);
   return 0;
}
