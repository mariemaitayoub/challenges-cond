#include <stdio.h>
#include <math.h>
int main(){

float a ,b,c,delta,x,y,z;
printf("a et b et c sont :");
scanf("%f%f%f",&a,&b,&c);

delta =pow(b,2)-(4*a*c);

if (delta <0)
printf ("pas de solution");
else if (delta ==0){
    x=(-b)/(2*a);
    printf("la sollution est :%2.f",x);

}
else if (delta >0){
y=(-b-sqrt(delta))/(2*a);
z=(-b+sqrt(delta))/(2*a);
    printf("la sollution sont :%f et %f",x,z);
}
 return 0 ;
}
