#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n%2==0 && n%3==0)
    printf("Div by 2 and 3");
    else
    printf("Not Div");
    return 0;
}