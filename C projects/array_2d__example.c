# include <stdio.h>
int main(){
    int stu[4][2],i,j,b[100];
    for(i=0;i<=3;i++){
        printf("\nEnter urn and marks=");
        scanf("%d %d",&stu[i][0],&stu[i][1]);
    }for(i=0;i<=3;i++){
        printf("%d student is %d %d\n",i+1,stu[i][0],stu[i][1]);
    }
    printf("\n%u\n",stu);
    for(i=0;i<=3;i++)
    {
        printf("address of %d row is=%u\n",i,*stu+i);
    
    for(j=0;j<=3;j++){
        printf("%d %d \t",i,j);
        printf("%u",*((stu+i)+j));
        printf("\n");
        
    }
}
    return 0;
}  