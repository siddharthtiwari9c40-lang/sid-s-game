# include <stdio.h>

int fact(int r) {
        int c,b=1;
        for(c = 1; c<=r; c++) {
        b=c*b;
        }
        return b;
}        

int main(){
        int r;
        printf("enter any number=");
        scanf("%d",&r);
        printf("Factorial of %d = %d\n",r, fact(r));

}
