# include <stdio.h>
int main( ){
    int a[25],i,j=0,k,b;
    for(i=0;i<=25;i++){
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search=");
    scanf("%d",&b);
    for(i=0;i<=25;i++){
        if(b==a[i]){
            j++;
        }
    }
    if(j>0){
        printf("the number of times %d is present = %d",b,j);
    } else{
        printf("not found");
    }
}   