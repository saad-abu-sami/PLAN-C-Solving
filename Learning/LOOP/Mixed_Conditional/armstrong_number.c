/* In number theory, a narcissistic number in a given number base
b is a number that is the sum of its own digits each raised to
the power of the number of digits. */
#include <stdio.h>
int main(){
   int num, temp, r, sum = 0;
   printf("Enter any number: ");
   scanf("%d", &num);
   // if we take 153 as num.
   temp = num; //num,153 = temp,153
   while (temp != 0){
      // 153 != 0, so the loop start
      r = temp % 10;          // r = 153%10 = 3
      sum = sum + r * r * r;  // sum = 0 + 3*3*3 = 27
      temp = temp / 10;       // temp = 153/10 = 15
                              // sum,27 != num,153. So, loop go again
   }
   if (sum == num)
      printf("Armstrong number\n");
   else
      printf("Not Armstrong number\n");
   return 0;
}
/* r = 15%10 = 5
   27 = 27 + 5*5*5 = 152
   temp = 15/10 = 1
   sum,152 != 153. So, loop go again.
   r = 1%10 = 1
   152 = 152 + 1*1*1 = 153
   sum,153 = temp,153. So, loop stops.
   So, 153 is Armstrong number.
*/
