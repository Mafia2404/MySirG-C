#include<stdio.h>
int main(){
    int a,b,t;
    printf("Enter two no to swap:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a is %d and b is %d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("After swapping a is %d and b is %d",a,b);
    return 0;
}