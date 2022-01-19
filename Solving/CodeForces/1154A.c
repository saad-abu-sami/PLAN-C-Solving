#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   int a[4], i, max = 0; //according to problem it takes only 4 array integer thats why a[4]
   for (i = 0; i < 4; i++){
      scanf("%d", &a[i]);//taking scanf we get 4 integer by looping i (taking 3,6,5,4)
      if (a[i] > max)    //from there we get max value and that is x4 (the max is 6, So x4=6)
         max = a[i];     //return x4=6
   }
   for (i = 0; i < 4; i++){//looping the four value 
      if (a[i] != max)     //if it is max then (max-a[i]); (6-3=3; 6-4=2; 6-5=1)
      printf("%d ", max - a[i]);//the answer is 3,1,2
   }
   return 0;
}
//Like before a+b=x1=40; b+c=x2=40; c+a=x3=40; a+b+c=x4= 60; Now x4-x1=20, x4-x2=20, x4-x3=20;
//Like before a+b=x1=101; b+c=x2=101; c+a=x3=200; a+b+c=x4= 201; Now x4-x1=100, x4-x2=100, x4-x3=1;
