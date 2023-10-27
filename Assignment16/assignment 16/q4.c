//check armstrong or not
#include<stdio.h>
int main(){
    int u,n,t,s=0;
    printf("Enter a no.:");
    scanf("%d",&n);
    u=n;
    while(n!=0){
        t=n%10;
        s= s + t*t*t;
        n/=10;
    }
    if(s==u)
    printf("No is armstrong");
    else 
    printf("No is not armstrong");
    return 0;
}