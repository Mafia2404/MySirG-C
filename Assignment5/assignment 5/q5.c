#include<stdio.h>
int main(){
    int n,t;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Enter a no to append:");
    scanf("%d",&t);
    n*=10;
    n+=t;
    printf("Ans is %d",n);
    return 0;
}