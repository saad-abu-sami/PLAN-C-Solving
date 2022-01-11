#include <stdio.h>
void display(char s1[]){
   int i = 0;
   while (s1[i] != '\0'){
      // Alexander = s1[0]-A , s1[1]-l, ...... , s1[8]-r , s1[i]-0 ;
      // while loop going untill s1[i] != '\0' ;
      printf("%c\n", s1[i]);
      // here print one by one s1[0]-A , s1[1]-l, ...... , s1[8]-r ;
      i++;
   }
   
}
int main(){
   char str[] = "Alexander";
   display(str);
}
