#include <stdio.h>
#include <math.h>

float fps(float x){
 return (cos(x)-x*exp(x));
}
void fpm(float *x,float x0, float x1, float fx0, float fx1, int *itr){
 *x = x0 - ((x1-x0)/(fx1-fx0))*fx0;
 ++*itr;
 printf("\n Iteration %3d %7.5f",*itr,*x);
}

int main(){
 int itr = 0,maxmitr;
 float x0, x1, x2, x3, allerr;
 printf("\n Enter x0, x1, allowed error, maximum iteration ");
scanf("%f %f %f %d",&x0,&x1,&allerr,&maxmitr);
fpm(&x2,x0,x1,fps(x0),fps(x1),&itr);
do{
if(fps(x0)*fps(x2)<0)
 x1 = x2;
 else
 x0 = x2;
 fpm(&x3,x0,x1,fps(x0),fps(x1),&itr);
 if(fabs(x3-x2)<allerr){
 printf("\n After %d iteration ,roots = %6.4f",itr,x3);
 return 0;
 }
 x2 = x3;
}while(itr<maxmitr);
 printf("\n Solution doesn't exist");
 return 0;
}
