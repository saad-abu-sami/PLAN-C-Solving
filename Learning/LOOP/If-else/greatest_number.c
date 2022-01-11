#include <stdio.h>

int main(){
   int num1, num2, num3;
   printf("Input the values of three numbers : ");
   scanf("%d %d %d", &num1, &num2, &num3);
   printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);
   // Enter the number in 1st loop if num1>num2.
   // 1st condition IF
   if (num1 > num2){
   // 2nd condition IF
      if (num1 > num3){
         printf("The 1st Number is the greatest among three. \n");
      }
      else{
         printf("The 3rd Number is the greatest among three. \n");
      }
   }
   // Enter the number in 1st loop if num2>num3.
   // 3rd condition ELSE IF
   else if (num2 > num3){
      printf("The 2nd Number is the greatest among three \n");
   }
   else
      printf("The 3rd Number is the greatest among three \n");
}
// num1=3 , num2=5 , num3=7;
// 1st condition      if, 3 !> 5
// 2nd condition      if, 3 !> 7
// 3rd condition else if, 5 !> 7
// 4th condition else correct(num3 is the greatest among three)
