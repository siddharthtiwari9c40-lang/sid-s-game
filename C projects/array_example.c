#include <stdio.h>
int main(){
    int element[]={32,34,56,76,212},i;
    for(i=0;i<=4;i++){ 
    printf("element %d is %d and its address is %u\n",(i+1),element[i],&element[i]);
    }
    printf("name of the array=%u",element);

}