#include <stdio.h>
// this programme works through 1! = 1, 2! = 2, 3! = 6 .....
int main(){
   int i, number, one_to_number, factorial = 1;
   printf("Enter a number : ");
   scanf("%d", &number);
   for (i = 1; i <= number; i++){
      // first loop going from int 1 till the entered number
      factorial = 1;
      // here we write factorial = 1 because 5! = 1*2*3*4*5 means start with 1
      for (one_to_number = 1; one_to_number <= i; one_to_number++){
         // i goes untill <= number and one_to_number goes untill <= i.
         // if the number is 5 then its factorial is 5! = 5*4*3*2*1 = 120
         
         // 1st if number  = 5 then in 1st for i=1 <= 5 and 2nd for one_to_number <= i then 1! = 1
         // 1st if number  = 5 then in 1st for i=2 <= 5 and 2nd for one_to_number <= i then 2! = 2
         // 1st if number  = 5 then in 1st for i=3 <= 5 and 2nd for one_to_number <= i then 3! = 6
         // 1st if number  = 5 then in 1st for i=4 <= 5 and 2nd for one_to_number <= i then 4! = 24
         // 1st if number  = 5 then in 1st for i=5 <= 5 and 2nd for one_to_number <= i then 5! = 120
         factorial = factorial * one_to_number;
      }
      printf("%d! =\t%d\n", i, factorial);
   }
}
