#include<stdio.h>
int main(){
    int n,t;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n!=0){
        t=n;
        n/=10;
    }
    printf("%d",t);
    return 0;
}