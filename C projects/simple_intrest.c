#include <stdio.h>

int main() {
  int p,n,count;
  float r,si;
  count=1;
  while (count<=3){
    printf("\nenter the value of p");
    scanf("%d",&p);
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of r");
    scanf("%f",&r);
    si=p*n*r/100;
    printf("simple intrest=Rs.%f",si);
    count=count+1;
  }
   
          
 }