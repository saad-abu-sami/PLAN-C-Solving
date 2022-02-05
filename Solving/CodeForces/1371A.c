#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   int t, n; //here t means how many stick we have
   scanf("%d", &t);//If we take input 6 for the stick
   while (t--){
      scanf("%d", &n); //here n is the stick size
      printf("%d\n", n / 2 + n % 2);
      //((7/2+7%2)=4),((8/2+8%2)=4),((9/2+9%2)=5),((10/2+10%2)=5)
      //like these 1 and 2 values stick together we make 1 length two sticks.
   }
}
