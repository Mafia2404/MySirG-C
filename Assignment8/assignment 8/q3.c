#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter ax^2+bx+c=0 \na,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b -4*a*c;
    if(d>0)
    printf("Roots are Real and distinct");
    else if(d==0)
    printf("Roots are Real and Equal");
    else 
    printf("Roots are Imaginay");
    return 0;
}