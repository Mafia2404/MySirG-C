#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three no.");
    scanf("%d%d%d",&a,&b,&c);
    float s=(a+b+c)/3.0; //typecast for float  ans
    printf("Avg is:%f",s);
    return 0;
    
}