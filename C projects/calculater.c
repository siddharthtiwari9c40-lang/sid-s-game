#include <stdio.h>

int main() {
   int a,b,c,d;
   do{
     printf("\n \n ENTER \n 1 for addition\n 2 for subtraction \n 3 for multiplication \n 4 for division \n= ");
      scanf("%d",&a);
      switch(a){
        case 1:
        printf("enter the numbers you want to add\n");
        printf("enter the first number=");
        scanf("%d",&b);
        printf("enter the second number=");
        scanf("%d",&c);
        d=b+c;
        printf("summ=%d",d);
        break;
        case 2:
        printf("enter the numbers you want to subtract\n");
        printf("enter the first number=");
        scanf("%d",&b);
        printf("enter the second number=");
        scanf("%d",&c);
        d=b-c;
        printf("diff=%d",d);
        break;
        case 3:
        printf("enter the numbers you want to multiply\n");
        printf("enter the first number=");
        scanf("%d",&b);
        printf("enter the second number=");
        scanf("%d",&c);
        d=b*c;
        printf("multi=%d",d);
        break;
        case 4:
        printf("enter the numbers you want to divide\n");
        printf("enter the first number=");
        scanf("%d",&b);
        printf("enter the second number=");
        scanf("%d",&c);
        d=b/c;
        printf("divide=%d",d);
        break;
      }
    } while(a!=0);

  }    
