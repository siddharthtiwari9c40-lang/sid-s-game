#include <stdio.h>
float square(float);
int main() {
  float a,b;
  printf("enter a number=");
  scanf("%f",&a);
  b=square(a);
  printf("square of%f=%f",a,b);
}

float square(float x)
{
  float y;
  y=x*x;
  return(y);
}
