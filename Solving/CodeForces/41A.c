#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
   char s[101], t[101];
   gets(s);
   gets(t);
   if(strcmp(strrev(s), t)==0)puts("YES");
   else puts("NO");
}
