#include <stdio.h>
int main(){
   int num, temp, r, sum = 0;
   print("Enter any number : ");
   scanf("%d", &num);
   //  #TODO if we take 431 for num
   temp = num;
   while (temp != 0){
      // 431 != 0 , so temp != 0 and while loop start
      r = temp % 10;
      // 431 % 10 = 1
      sum = sum + r;
      // 0 = 0 +1 = 1
      temp = temp / 10;
      // 431 / 10 = 43
   }
   printf("sum of digits : %d\n", sum);
   return 0;
}
// 43%10 = 3
// 1 = 1 + 3 = 4
// 43/10 = 4
// 4%10 = 4
// 4 = 4 + 4 = 8
// Finally sum = 8
