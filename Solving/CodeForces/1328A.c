// not understans
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   int t;
   scanf("%d", &t);
   long long a, b;
   while (t--){
      scanf("%lld %lld", &a, &b);
      printf("%lld\n", a % b ? b - a % b : 0);
   }
}
