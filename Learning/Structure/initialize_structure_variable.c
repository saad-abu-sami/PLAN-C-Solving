#include<stdio.h>
#include <string.h>
struct Person{
   int age;
   float salary;
};
int main(){
   struct Person person1 = {27,25550.25}; //Local Variable
   struct Person person2,person3;
   //element wise assignment
   person2.age = 25;
   person2.salary = 18000.00;
   //stracture variable assignment
   person3 = person2;


   printf("Person1 \n");
   printf("Age = %d\n", person1.age);
   printf("Salary = %2f\n\n", person1.salary);

   printf("Person2 \n");
   printf("Age = %d\n", person2.age);
   printf("Salary = %2f\n\n", person2.salary);

   printf("Person3 \n");
   printf("Age = %d\n", person3.age);
   printf("Salary = %2f\n", person3.salary);
}