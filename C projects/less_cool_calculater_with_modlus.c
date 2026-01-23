#include <stdio.h>

int main() {
   int a,b,c,d;
   do{
     printf("\n \n ENTER \n 1 for addition\n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 for modulus \n= ");
      scanf("%d",&a);
       printf("enter the first number=");
       scanf("%d",&b);
       printf("enter the second number=");
       scanf("%d",&c);
      switch(a){
        case 1:
        d=b+c;
        printf("summ=%d",d);
        break;
        case 2:
        d=b-c;
        printf("diff=%d",d);
        break;
        case 3:
        d=b*c;
        printf("multi=%d",d);
        break;
        case 4:
        d=b/c;
        printf("divide=%d",d);
        break;
        case 5:
        d=b%c;
        printf("mod=%d",d);
        break;
      }
    } while(a!=0);

  }    
