#include <stdio.h>
int main(){
   int n, sum = 0;
   // here sum = 0 because 1^2+4^2+0^2=17 its sum not into.
   printf("Enter n value: ");
   // collect the value thats how much the loop will take
   scanf("%d", &n);
   // we count square from 0 to the value n.

   for (int i = 0; i <= n; i++){
      // initialize integer i.
      sum += (i * i);
      // sum = sum + (i * i).
   }
   // now explaining about loop how goings
   // 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 = 91.

   // for(int i=0; 0<=6; i++){
   //    0 = 0 + (0*0);
   //    sum = 0 ;
   // }

   // for(int i=1; 1<=6; i++){
   //    0 = 0 + (1*1);
   //    sum = 1 ;
   // }
   printf("Sum of squares of first %d natural numbers = %d",
          n, sum);

   return 0;
}
