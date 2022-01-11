#include <stdio.h>
int main(){
   int n, i, p;    //Taking i for circling the loop.
   float sum = 0;  //here sum=0 because loop sum start with zero.
   scanf("%d", &n);//n means how many number we take for looping.
   //If we take n=4 for looping.
   for (i = 0; i < n; i++){
      scanf("%d", &p);//the four number is 10,20,30,40.
      sum = sum + p;  //sum=10+20+30+40=100.
   }
   sum = sum / n;     //sum=100/4=25
   printf("%f", sum); //sum=25
}
