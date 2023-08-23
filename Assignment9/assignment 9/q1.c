#include<stdio.h>
int main(){
    int s,c;
    float p;
    printf("Enter selling and cost price:");
    scanf("%d%d",&s,&c);
    p=(s-c)*1.0/c*100;
    if(p>0)
    printf("Profit percent is %f",p);
    else
    printf("Loss percent is %f",p);
    return 0;
    
}