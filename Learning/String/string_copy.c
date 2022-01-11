#include <stdio.h>
#include <string.h>
int main(){
   char a[50] = "abodef";
   char b[50];
   strcpy(b, a); //convert a string to b
   printf("%s\n", a);
   printf("%s\n", b);
   return 0;
}
