# include <stdio.h>
int modify(int a[]);
int main(){
int a[10],i,n,sh,f=0;
for(i=0;i<10;i++){
printf("Enter the number you want to insert=");
scanf("%d",&a[i]);
}
modify(a);
for(i=0;i<10;i++){
printf("%d ",a[i]);
}
}
int modify(int a[]){
    int i;
    for(i=0;i<10;i++){
        a[i]=a[i]*3;
}
}