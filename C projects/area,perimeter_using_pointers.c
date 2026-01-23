# include <stdio.h>
int areac(float,float*,float*);
int main(){
    float r,ar,per;
    printf("enter the radius of the circle=");
    scanf("%f",&r);
    areac(r,&ar,&per);
    printf("area=%f\n",ar);
    printf("perimeter=%f",per);
}

int areac(float r,float *ar,float *per){
    *ar=r*r*3.14;
    *per=2*3.14*r;
  
}