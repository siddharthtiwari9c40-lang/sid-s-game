#include <stdio.h>
int primefact(int);
int main(){
    int a,b,c;
    printf("enter a number=");
    scanf("%d",&a);
    primefact(a);
}

int primefact(int a){
    int b=2;
    printf("prime factors of %d are=",a);
    while(a>1){
        if(a%b==0){
            printf(" %d",b);
            a=a/b;
        }else{
            b++;
        }
    }
    

}
    
