#include <stdio.h>
int main( )
{
   int min,max,i,j,temp=0,a[3][3]={1,1,1,
                    1,1,1,
                    1,1,1};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         printf("%d ",a[i][j]);   
        }  
       printf("\n");  
    } 
       
     printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         printf("%d ",a[j][i]);   
        }  
       printf("\n");  

    
    }
    temp = 1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]!=a[j][1]){
                temp=0;
            }else{
                temp=1;
            }
        }
    }    
     if(temp){
        printf("the matrix is symetrical");
     } else{
        printf("not symatrical");
     }
     
}
