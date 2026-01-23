#include<stdio.h>
int main() {
    int cl,sf;
    printf("Enter class obtained=");
    scanf("%d",&cl);
    printf("Enter number of subjects failed=");
    scanf("%d",&sf);
    switch(cl){
        case 1:
        if(sf<=3){
            printf("5 grace marks obtained for each subject");
        }else{
            printf("no grace marks for you!!!");
        }
        break;
        case 2:
        if(sf<=2){
            printf("4 grace marks obtained for each subject");
        }else{
            printf("no grace marks for you!!!");
        }
        break;
        case 3:
        if(sf<=1){
            printf("5 grace marks obtained for each subject");
        }else{
            printf("no grace marks for you!!!");
        }
        break;
    }
    return 0;
}    