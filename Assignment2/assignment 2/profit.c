#include<stdio.h>
int main(){
    int s,c;
    printf("Enter selling and cost price:");
    scanf("%d%d",&s,&c);
    float p=(float)(s-c)/c;
    p*=100;
    printf("Profit is :%f",p);
    return 0;
}