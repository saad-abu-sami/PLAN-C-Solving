#include <stdio.h>
int main(){
    // f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n n
    long long n;
    scanf("%lld", &n);
    // Here ? means true or false
    // True means 1 or False means 0
    // If it 1 execute : first term
    printf("%lld", n % 2 == 0 ? n / 2 : -n / 2 - 1);
    // Taking 10; 10%2=0; 0==0 So it's true; 10/2=5; Answer is 5
    // Taking 5 ; 5%2=1; 0=/=1 So it's false; (-5/2)-1=(-2)-1=-3; Answer is -3
}
