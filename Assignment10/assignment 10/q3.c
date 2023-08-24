#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter threee side of  triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c)
    printf("not valid");
    else if(a+c<=b)
    printf("not valid");
    else if(b+c<=a)
    printf("not valid");
    else 
    printf("valid");
    return 0;
}