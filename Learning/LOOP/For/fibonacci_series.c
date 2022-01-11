#include <stdio.h>
int main(){
   int i, n; // i for loop circling, and n for how long the loop going.
   // initialize first and second terms
   int t1 = 0, t2 = 1;
   // initialize the next term (3rd term)
   int nextTerm = t1 + t2;
   printf("Enter the number of terms: "); // get no. of terms from user
   scanf("%d", &n); //if we take 8 for terms
   // print the first two terms t1 and t2
   printf("Fibonacci Series: %d, %d, ", t1, t2);
   // print 3rd to nth terms
   for (i = 3; i <= n; ++i){
      // at line 5 we initialize t1,0 & t2,1 . So, from line 7 next term=0+1=1
      printf("%d, ", nextTerm); //print nextTerm = 1
      t1 = t2;                  //t1 = t2,1 . So, t1 = 1
      t2 = nextTerm;            //t2 = nextTerm,1 . So, t2 = 1
      nextTerm = t1 + t2;       //nextTerm = t1 + t2 = 1 + 1 = 2
   }
   return 0;
}
/* print nextTerm = 2; t1 = t2,1 . So, t1 = 1; t2 = nextTerm,2 . So, t2 = 2; nextTerm = t1 + t2 = 1 + 2 = 3;

   print nextTerm = 3; t1 = t2,2 . So, t1 = 2; t2 = nextTerm,3 . So, t2 = 3; nextTerm = t1 + t2 = 2 + 3 = 5;

   print nextTerm = 5; t1 = t2,3 . So, t1 = 3; t2 = nextTerm,5 . So, t2 = 5; nextTerm = t1 + t2 = 3 + 5 = 8;

   print nextTerm = 8; t1 = t2,5 . So, t1 = 5; t2 = nextTerm,8 . So, t2 = 8; nextTerm = t1 + t2 = 5 + 8 = 13;
*/
