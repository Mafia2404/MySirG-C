#include<stdio.h>
int main(){
    int n,t;
    printf("Enter a three digit no.:");
    scanf("%3d",&n);//this will read only upto three digits
    //123 312
    t=n%10;
    t*=100;
    n/=10;
    t+=n;
    printf("%d",t);
    return 0;
    
    
}