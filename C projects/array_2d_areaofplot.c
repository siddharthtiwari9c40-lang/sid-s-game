#include <stdio.h>
#include <math.h>
int main( )
{
   double a[6]     = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    double b[6]     = {80.9,  92.62, 97.93, 100.25, 68.95, 120.0};
    double angle[6] = {0.78,  0.89,  1.35,  9.00,  1.25,  1.75};

    double area[6];
    double maxarea,minarea;
    int i,maxplot;
    maxarea=minarea=area[0];
    for(i=0;i<6;i++){
        area[i]=0.5*a[i]*b[i]*sin(angle[i]);
    }
    if(area[0]>maxarea){
        maxarea=area[i];
        maxplot=i+1;
    }
     printf("\nLargest area is Plot %d with area = %.2f\n", maxplot, maxarea);
}
