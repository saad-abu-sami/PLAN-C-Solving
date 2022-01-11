#include <stdio.h>
int main(){
   int first=0,second=1,count=0,fibo,n;//we initialize first,0 & second,1.
   printf("Enter range: ");
   scanf("%d",&n);                     //if we take range 8
   while(count<n){                     //count loop run untill it come to 8
      if(count<=1){                    //if count<=1 print fibo=count
         fibo=count;
      }
      else{
         fibo=first+second;
         first=second;
         second=fibo;
      }
      printf("Fibonacci number is : %d\n",fibo);
      count++;
   }
}
