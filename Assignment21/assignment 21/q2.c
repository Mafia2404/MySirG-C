#include<stdio.h>
float si(int,int,int);
int main(){
    int p,t,r,s;
    printf("Enter principal,rate,time:");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Intrest:%f",si(p,r,t));
    return 0;
}
float si(int p,int r,int t){
    return (p*r*t)*(1.0)/100;
}