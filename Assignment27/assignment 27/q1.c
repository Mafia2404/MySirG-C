#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Sum of %d natural no is %d",n,sum(n));
    return 0;
}
int sum (int n){
    if(n==0)
    return 0;
   return n+sum (n-1); 
}