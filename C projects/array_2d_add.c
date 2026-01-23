
int main( )
{
   int min,max,i,j,temp=0,a[3][3]={1,1,1,
                    1,1,1,
                    1,1,1};
    int c[3][3],b[3][3]={1,1,1,
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
         printf("%d ",b[i][j]);   
        }  
       printf("\n");  

    }
   
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         c[i][j]=0;   
        }  
    }
     printf("\n"); 
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         c[i][j]=a[i][j]+b[i][j];   
        }  
    } 
     printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         printf("%d ",c[i][j]);   
        }  
       printf("\n");  

    }
 
}
