//swap in single line arithmatic expression
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two no.s:");
    scanf("%d%d",&a,&b);
    b=a+b-(a=b);
    printf("Now a is %d and b is %d",a,b);
    return 0;
}