#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
    printf(" Div");
    else
    printf("Not Div");
    return 0;
}