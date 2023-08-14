#include<stdio.h>
int main(){
    int n,t;
    printf("Enter a no.");
    scanf("%d",&n);
    t=n/10;
    t*=10;
    printf("Now the no. is %d",t);
    return 0;
}