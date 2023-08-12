#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter Principal,rate,time:");
    scanf("%d%d%d",&p,&r,&t);
   float s=(p*r*t)/100.0;//typecast for 
    printf("Simple intrest is:%f",s);
    return 0;
}