#include <stdio.h>
int prime(int);
int main(){
  int a,b;
  printf("enter the number till which you want to print prime numbers=");
  scanf("%d",&a);
    printf("all prime numbers between 1 and %d are=",a);
    for(b=2;b<=a;b++){
      if(prime(b)){
        printf("%d ",b);
      }
    }
}

int prime(int a){
  int i=2;
  while(i<=a-1){
    if(a%i==0){
      return 0;
    }
    i++; 
  }  
  return 1;
} 