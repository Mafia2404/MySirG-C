#include<stdio.h>
int main(){
    int a,b;
    // dont give zero input
    printf("Enter two no.s to swap:");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("Now a is %d and b is %d",a,b);
    return 0;
}