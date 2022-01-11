// We can also find the sum of squares of N natural numbers without using the loop.
// The formula is given as,
#include <stdio.h>
int main()
{
   int n;

   printf("Enter n value: ");
   scanf("%d", &n);
   // The sum of squares of N natural numbers = n(n+1)(2n+1)/6;
   int sum = n * (n + 1) * (2 * n + 1) / 6;

   printf("Sum of squares of first %d natural numbers = %d",
          n, sum);

   return 0;
}