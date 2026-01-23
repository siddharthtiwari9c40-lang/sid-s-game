#include <stdio.h>

int main() {
     int n=5,marks,hight=-1,top1=-1,top2=-1,top3=-1,count=0,abavg=0,sum=0;
     float avg;
     printf("enter the marksof%d students in range(0-100)",n);
     while(count<n){
        scanf("%d",&marks);
        count++;
        sum=sum+marks;
        if(marks>top1){
            top3=top2;
            top2=top1;
            top1=marks;
        }else if(marks>top2){
            top3=top2;
            top2=marks;
        }else if(marks>top3){
            top3=marks;
        }
        hight=top1;
     }
     avg= sum/n;
     printf("avg marks is %0.2f\n",avg);
     printf("higest marks is %d\n",hight);
     printf("top 3 marks marks is %d %d %d\n",top1,top2,top3);
     count=0;
     printf("re-enter the marks again\n");
     while(count<n){
        scanf("%d",&marks);
        if(marks>avg){
            abavg++;
        }
        count++;
     }
     printf("no. of students that have scored above avg=%d",abavg);
    }     