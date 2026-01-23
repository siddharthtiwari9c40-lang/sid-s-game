# include <stdio.h>
struct student
{
int roll ;
char name[ 50 ] ;

};
int main(){
    struct student s1[10];
    int i,a,b;
    printf("how many students= ");
    scanf(" %d",&a);
    for(i=0;i<a;i++){
        printf("roll no = ");
        scanf(" %d",&s1[i].roll);
        getchar();
        printf("enter name\n");
        fgets(s1[i].name,50,stdin);
    }
    for(i=0;i<a;i++){
        printf("roll no = %d\n",s1[i].roll);
        fputs(s1[i].name,stdout);
       
    }
}