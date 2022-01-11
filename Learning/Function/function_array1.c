#include <stdio.h>
void display(int x[]){
   int i;
   for(i = 0; i < 5; i++){
      printf("%d ", x[i]);
   }
}

int main(){
   int num[] = {11,22,33,44,55};
   display(num);
}