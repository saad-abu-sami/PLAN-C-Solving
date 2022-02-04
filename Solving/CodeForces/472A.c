#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   //8 & 9 both are composit number, So whatever we take any number from there one number is 8 and other is 9
   int n, m;
   scanf("%d", &n);
   m = n % 2 + 8;//So, we do +8. So that if the number is even then it is 8, else odd number is 8+1=9
   printf("%d %d", m, n - m);
}
