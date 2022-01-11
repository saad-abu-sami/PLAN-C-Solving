#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main(){
   int row=1,column,y;
   printf("               Multiplication Table               \n\n");
   do{
      column = 1;
      do{
         y = row * column;
         // here y is all the row and columns items.
         // r1*c1=1 like that r3*c2=6.
         printf("%d\t", y);
         column = column + 1;
         // every time after loop column +1 increase.
         // this while loop runs until COLMAX < 10
      }while(column < COLMAX);
         printf("\n");
         row = row + 1;
         // every time after loop row +1 increase.
         // this while loop runs until ROWMAX <= 12
   }while(row <= ROWMAX);
   printf("\n");
   printf("__________________________________________________");
}
