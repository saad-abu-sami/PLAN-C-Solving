#include <stdio.h>
int main(){
   int i, n;
   printf("Enter your number to reverce :  \n");
   scanf("%d", &n);
   printf("Reverce of %d is : ", n);
   // if we take 54312 for number 
   for (i = 0; n != 0; i++){
      //loop start with i[0] index ;untill n!=0 loop going; i increase in every loop
      printf("%d", n % 10);//54321%10=1; 5432%10=2; 543%10=3; 54%10=4; 5%10=5;
      n = n / 10;          //54321/10=5432; 5432/10=543; 543/10=54; 54/10=5;
   }
   return 0;
}
