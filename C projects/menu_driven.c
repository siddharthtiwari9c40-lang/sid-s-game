#include<stdio.h>
#include <stdlib.h>
int main() {
    int w,fact,i,pr,ev,isprime=1;
    do{
        printf("\n----- MENU -----\n");
        printf("Factorial = 1\ncheck prime = 2\nodd/even = 3\nexit = 4\nenter here=");
        scanf("%d",&w);
        switch(w){
        case 1:
        printf("Enter a number to find its factorial=");
        scanf("%d",&fact);
        int emp=1;
        for(i=1;i<=fact;i++){
            emp=emp*i;
        }
        printf("factorial= %d\n",emp);
        break;
        case 3:
        printf("enter the number=");
        scanf("%d",&ev);
        if(ev%2==0){
            printf("its an even number");
        }else{
            printf("its an odd number");
        }
        break;
        case 2:
        printf("enter a number=");
        scanf("%d",&pr);
        for (i = 2; i <= pr / 2; i++) {
            if (pr % i == 0) {
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            printf("%d is a prime number.\n",pr);
        }else{
            printf("%d is not a prime number.\n",pr);
        }
        break;
        case 4:
        printf("Exiting program...\n");
        exit(0);    
        }
    }
    while(w!=0);
}        