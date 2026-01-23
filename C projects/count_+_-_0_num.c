#include<stdio.h>
int main() {
    int a,c,n=0,p=0,z=0;
    char b;
    do{
        printf("enter some number=");
        scanf("%d",&a);
        if(a==0){
            z++;
        }else if(a>0){
            p++;
        } else{
            n++;
        }
        printf("do you want to enter another number(y?)=");
        scanf(" %c",&b);
    }while(b=='y');
    printf("count of possitive numbers= %d\n",p);
    printf("count of zero numbers= %d\n",z);
    printf("count of negative numbers= %d\n",n);
    return 0;
}    