#include <stdio.h>
int main(){
   int num1,num2,n1,n2,rem,gcd,lcm;
   // get num1,num2 and put them on n1,n2. rem means reminder.
   // gcd:Greatest Common Divisor ; lcm:Least Common Multiple.
   printf("Enter two numbers num1,num2 : ");
   scanf("%d%d",&num1,&num2);
   // num1=60= 2 * 2 * 3 * 5;
   // num2=24= 2 * 2 * 2 * 3;
   // here for gcd common everyone is 2*2*3==12 ;
   // here for lcm all and everyone are 2*2*2*3*5=120 ;
   n1 = num1 ; n2 = num2 ;
   // if n2=num2=0 happen then lcm = 0 so thats incorrect thats why while!=0;
   while (n2 != 0){
      // n1    n2    rem
      // 60 %  24 =  12, this line n2 comes and go .....
      // 24 %  12 =  0, ... to this line n1;
      // 12 %  0  =  0
      rem = n1%n2;
      n1 = n2;
      // why n1 = n2 describe in line 16 & 17;
      n2 = rem;
      // the answer gcd is 12 and thats the reminder;
   }
   gcd = n1;
   lcm = ((num1 * num2)/gcd);

   printf("GCD is %d\n", gcd);
   printf("LCM is %d\n", lcm);
}
