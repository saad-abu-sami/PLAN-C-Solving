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
   int a,b,c;
   int t1,t2;
   scanf("%d%d%d",&a,&b,&c);
   t1 = minimum(a,b);
   t2 = minimum(t1,c);
   printf("The smaller number is : %d\n",t2);
   return 0;
}
