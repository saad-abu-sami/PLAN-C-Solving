#include<stdio.h>
#include <string.h>

struct Person{
   int age;
   float salary;
};

int main(){
   struct Person person[4];
   int i, j;
   for(i=0; i<4; i++){
      printf("Enter information for person %d\n", i+1);
      printf("Enter age: ");
      scanf("%d", &person[i].age);
      printf("Enter salary: ");
      scanf("%f", &person[i].salary);
   }
   for(i=0; i<4; i++){
      printf("\n\nInformation for person %d\n", i+1);
      printf("Age %d\n", person[i].age);
      printf("Salary %f\n", person[i].salary);
   }
}
