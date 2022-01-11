#include <stdio.h>
int main(){
   double base,exp;
   printf("Enter base = ");
   scanf("%lf",&base);
   printf("Enter exponent = ");
   scanf("%lf",&exp);
   double result = 1, i;      //if we take 2^3 for exponential
   for(i = 1; i <= exp; i++){ //loop start with 1 because 1*something = something;
                              //loop no 1; as exp,3. loop goes 3 times; i++,every time base increase by i
      result = result*base;   //1. 1= 1*2=2 , result = 2 ; 2. result = 2*2 = 4 ; 3. result = 4*2 = 8 ;
   }                          //here 2^3, so the loop going 3 times.In fact loop going through the exp.
   printf("%.1lf\n",result);
}
