#include<stdio.h>
int main(){
    int n,s=0,t;
    printf("Enter a three digit no.:");
    scanf("%3d",&n);//sum of only first three digits
    while(n!=0){
        t=n%10;
        s+=t;
        n/=10;
    }
    printf("Sum of digits:%d",s);
    return 0;
}