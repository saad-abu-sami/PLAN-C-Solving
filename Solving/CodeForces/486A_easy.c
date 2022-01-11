#include <stdio.h>
int main(){
   while(1){
   // f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n n 
   long long n;
   scanf("%lld",&n);
   // Here ? means true or false
   // True means 1 or False means 0
   // If it 1 execute : first term
   printf("Answer is : %lld",n%2==0?n/2:(n/2)-n);
   // Taking 10; 10%2=0 ; so 10/2=5 ; Answer is 5
   // Taking  5; 5%2=1 ; so (5/2)-5=+2-5=-3; Answer is -3
   }
}
