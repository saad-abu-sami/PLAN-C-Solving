#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   double n;
   int tmp = 0, i;
   for (i = 0; i < 6; ++i){
      scanf("%lf", &n);
      if (n > 0){
         tmp++;
      }
   }
   printf("%i valores positivosn", tmp);
   return 0;
}
