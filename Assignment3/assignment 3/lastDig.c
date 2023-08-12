#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    n=n%10;
    printf("%d",n);
    return 0;
}