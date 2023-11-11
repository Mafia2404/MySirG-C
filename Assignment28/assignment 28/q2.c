#include<stdio.h>
int hcf(int,int,int);
int main(){
    int a,b,n;
    printf("Enter two no.s:");
    scanf("%d%d",&a,&b);
    n=a>b?a:b;
    printf("Hcf is %d",hcf(a,b,n));
    return 0;
}
int hcf(int a,int b,int n){
    if(a%n==0 && b%n==0)
    return n;
   return hcf(a,b,n-1); 
}