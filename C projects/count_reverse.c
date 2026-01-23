#include <stdio.h>
int countDigits(int n);
int reverseNumber(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("number of digits in %d is %d\n",n,countDigits(n));
    printf("reverse of number %d is %d",n,reverseNumber(n));
}

int countDigits(int n) {
    int i,count=0;
    for(i=n;i!=0;i/=10){
      count++;
    }
    return count;
}

int reverseNumber(int n){
  int i=0,j;
  while(n!=0){
    j=n%10;
    i=i*10+j;
    n/=10;
  }
  return i;
}