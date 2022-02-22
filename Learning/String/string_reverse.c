// The strrev() function is used to reverse the given string.
/*Returns: This function returns the string after reversing the given string.
Note: This is a non-standard function that works only with older versions of Microsoft C.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   char str[50] = "geeksforgeeks";
   printf("The given string is =%s\n", str);
   printf("After reversing string is =%s", strrev(str));
   return 0;
}
