#include<stdio.h>
float area_cir(float);
int main(){
    float r,a;
    printf("Enter the radius:");
    scanf("%f",&r);
    a=area_cir(r);
    printf("Area of circle:%f",a);
}
float area_cir(float r){
    return 3.14*r*r;
}