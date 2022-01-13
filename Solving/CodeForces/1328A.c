// not understans
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   int t, a, b;
   scanf("%d", &t);
   while (t--){
      scanf("%d%d", &a, &b);
      printf("%d\n", (b - a % b) % b);
   }
}
