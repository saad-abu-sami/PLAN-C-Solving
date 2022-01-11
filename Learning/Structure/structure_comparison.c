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

   if(person1.age==person2.age && person1.salary==person2.salary){
      printf("Person1 equal to person2");
   }
   else{
      printf("Person1 not equal to person2");
   }
}