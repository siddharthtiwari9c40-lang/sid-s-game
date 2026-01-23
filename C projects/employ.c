#include <stdio.h>
#include<string.h>
int main() {
   struct employ{
    char name[100];
    int age;
    float salary;
   };
   struct employ e1={"sid",19,1000000};
   struct employ e2,e3;
   strcpy(e2.name,e1.name);
   e2.age=e1.age;
   e2.salary=e1.salary;
   e3=e2;
   printf("\n name is %s",e3.name);
   printf("\nage is %d",e3.age);
   printf("\nsalary is %f",e3.salary);

}