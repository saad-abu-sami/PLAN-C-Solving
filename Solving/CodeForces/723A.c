#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   int x, y, z;
   scanf("%d %d %d", &x, &y, &z);
   printf("%d\n", ((abs(x - y) + abs(y - z) + abs(x - z)) / 2));
   return 0;
}
