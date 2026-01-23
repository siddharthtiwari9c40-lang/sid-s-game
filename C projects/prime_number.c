#include <stdio.h>
int main() {
    int a,i,j,k;
   printf("enter no of lines = ");
   scanf("%d",&a);
   for(i=2;i<=a;i++){
    k=1;
    for(j=2;j<=i;j++){
        if(i%j==0){
            k=0;
        }
        break;
    }
    if(k==1){
        printf("%d\n",i);
    }
   }
   return 0;
}    
