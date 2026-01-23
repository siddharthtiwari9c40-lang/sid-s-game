# include <stdio.h>
int main(){
    int a[100],i,n,sh,f=0;
    printf("Enter the number of elements you want to insert=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number you want to insert=");
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search=");
    scanf("%d",&sh);
    for(i=0;i<=25;i++){
        if(sh==a[i]){
            printf("Element %d found at position %d.\n", sh, i + 1);
            f = 1;
            break;
        }
    }
     if (!f) {
        printf("Element %d not found in the array.\n", sh);
    }
}   
