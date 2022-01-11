#include<stdio.h>
#include <string.h>

struct Person{
   char name[100];
   int age;
   float salary;
};
void display(struct Person p){
   printf("\nName : %s\n",p.name);
   printf("Age : %d\n",p.age);
   printf("Salary : %f\n",p.salary);
}
int main(){
   struct Person person1,person2;
   strcpy(person1.name,"Abu Sami");
   person1.age = 22;
   person1.salary = 40000.00;
   display(person1);

   strcpy(person2.name,"MD Sami");
   person2.age = 28;
   person2.salary = 12000.00;
   display(person2);
}
