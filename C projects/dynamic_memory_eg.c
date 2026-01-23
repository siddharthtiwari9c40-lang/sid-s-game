#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    int*arr;
    printf("enter no. of elements");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory not allocated\n");
        return 0;
    }
    printf("enter %d integers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ypu have entered");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    int*arr;
    printf("enter no. of elements ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("memory allocated with 0\n");
        for(i=0;i<n;i++){
             printf("%d ",arr[i]);
        }
    }
    printf("enter %d integers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("you have entered ");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
