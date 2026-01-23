# include <stdio.h>
int main(){
        int a,b,c;
        printf("enter a number=");
        scanf("%d",&a);
        b=1;
        while(b<=a){
                c=b+a;
                b++;
        }
        printf("sum=%d",c);
}
