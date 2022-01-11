#include <stdio.h>
int main(){
   int arr[10];
   int i;
   printf("\n\nRead and Print elements of an array:\n");
   printf("-----------------------------------------\n");

   printf("Input 10 elements in the array :\n");
   for (i = 0; i < 10; i++){
      printf("element - %d : ", i);
      // element 0 :
      // element 1 :
      // element 2 : print like these 0 to 9
      scanf("%d", &arr[i]);
      // element 0 : i ; scan right side value
   }

   printf("\nElements in array are: ");
   for (i = 0; i < 10; i++){
      printf("%d  ", arr[i]);
      //Print the right side element of the first loop
      //Which value is given in the 1st for loop
   }
   printf("\n");
}
