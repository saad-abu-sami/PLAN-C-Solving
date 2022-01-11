/* Palindrome number means the number and the reverse of that number is
completely same. For example 121, 12121 are palindrome number. */
#include <stdio.h>
int main(){
      int num, temp, r, sum = 0;
      // if we take number 121, temp = 121
      printf("Enter any number: ");
      scanf("%d", &num);
      temp = num;
      while (temp != 0){
         // 121 != 0,so while temp != 0
         r = temp % 10;
         // 121%10 = 1
         sum = sum * 10 + r;
         // 0 = 0*10 + 1 = 1
         temp = temp / 10;
         // 121/10 = 12
         // sum,10 != 121
      }
      if (num == sum)
         printf("Palindrome number\n");
      else
         printf("Not palindrome\n");
   return 0;
}
/* 12%10 = 2
   1 = 1*10 + 2 = 12
   12/10 = 1
   1%10 = 1
   12 = 12*10 + 1 = 121
   now sum,121 = temp,121. So, Its a palindrome number */
