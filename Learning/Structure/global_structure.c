#include<stdio.h>
//Global Structure 
//collection of different data types(int,float,string)
struct Person{
   //member of the structure
   int age;
   float salary;
};
int main(){
   //now declare how many person we added
   struct Person person1, person2;

   person1.age = 27;
   person1.salary = 12750.50;
   printf("Person1 \n");
   printf("Age = %d\n", person1.age);
   printf("Salary = %2f\n", person1.salary);

   printf("\n");

   person2.age = 32;
   person2.salary = 22750.50;
   printf("Person2 \n");
   printf("Age = %d\n", person2.age);
   printf("Salary = %2f\n", person2.salary);
}
