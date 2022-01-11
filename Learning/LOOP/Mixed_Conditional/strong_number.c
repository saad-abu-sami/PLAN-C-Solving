#include <stdio.h>
int main(){
   int num,sum=0,rem,temp,fact,i;
   printf("Enter an integer number: ");
   scanf("%d",&num);       //if we take 145 as number
   temp=num;               //temp = num,145
   while(temp != 0){       //145!=0 So, the loop start
      rem = temp % 10;     //rem = 145%10= 5; 14%10= 4; 1%10= 1.
      fact = 1;            //now we calculate for 5! & for loop for 5!
      for(i=1;i<=rem;i++){ //i=1(factorial start with 1) ; 1<=5 ; 1++
      fact = fact * i;     //fact,1=1*1=1; fact,1=1*2=2; fact,2=2*3=6; fact,6=6*4=24; fact,24=24*5=120
      }                    //so the rem,5! = 120.Like that 4! = 24 & 1! = 1
      sum = sum + fact;    //sum = 5!+4!+1! = 120+24+1 = 145.
      temp = temp / 10;    //temp = 145/10= 14; 14/10= 1.
   }
   if(sum == num){
      printf("%d is a strong number.\n",num);
   }
   else{
      printf("%d is not a strong number.\n",num);
   }
   return 0;
}
