#include <stdio.h>
long fact(int);
int main(){
  int n;
  long f;
  printf("enter a number=");
  scanf("%d",&n);
  f=fact(n);
  printf("factorial of %d is%d",n,f);

}

long fact(int n){
  if(n==1){
    return 1;
  }else{
    return(n*fact(n-1));
  }
}