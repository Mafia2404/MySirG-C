#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    if(n%2==0) //or n%2 odd
    printf("Even No.");
    else
    printf("Odd No.");
    return 0;
}