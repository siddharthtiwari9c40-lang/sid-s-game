# include <stdio.h>
int prime(int);
int main(){
        int a,b;
        printf("enter the number you want to check=");
        scanf("%d",&a);
        b=prime(a);
        if(b){
                printf("number is prime");
        }else{
                printf("number is non prime");
        }
}

int prime(int a){
        int i=2;
        while(i<=a-1){
                if(a%i==0)
                {
                        return 0;
                }
                i++;       
                
        }
        return 1;
}

