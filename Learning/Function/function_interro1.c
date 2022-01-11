#include <stdio.h>
#include <math.h>

int minimum(int a, int b)
{
   if(a < b){
      return  a;
   }
   else{
      return  b;
   }
}

int main()
{
   int a,b, smaller = 0;
   scanf("%d%d",&a,&b);
   smaller = minimum(a,b);
   printf("The smaller number is : %d\n",smaller);
   return 0;
}
