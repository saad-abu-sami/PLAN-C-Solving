#include <stdio.h>
int main(){
   int num, count = 0;
   printf("Enter any integer : ");
   scanf("%d" , &num);  //if we take number 1234
   while (num!=0){
      // number 1234!=0 so, loop goes forward
      num = num / 10;   // 1234/10=123
      ++count;          // count 1.
   }
                        // 123/10 = 12, count 2.
                        // 12/10 = 1,   count 3.
                        // 1/10 = 0,    count 4.
                        // as num= 0 so loop doesn't go forward.
   printf("Tottal number of digit : %d\n", count);
   return 0;
}
