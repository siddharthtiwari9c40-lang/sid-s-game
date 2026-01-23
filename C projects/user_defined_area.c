# include <stdio.h>
float area(float,float);
int main( )
{

  float a,c,b;
  printf("enter the length of the rectangle=");
  scanf("%f",&a);
  printf("enter the width of the rectangle=");
  scanf("%f",&b);

  c=area(a,b);
  printf("\narea=%f",c);
}

float area(float l,float w){
float x;{
  x= l*w;
  return(x);
}
}