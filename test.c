#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k,i,r;
  scanf("%d %d", &k, &r);
  for(i=1;i<=10 && i*k%10!=0 && i*k%10!=r; i++){
  printf("%d\n", i);
  }
}
