#include<stdio.h>
int sumsq(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Sum of square of %d no.s is %d",n,sumsq(n));
    return 0;
}
int sumsq(int n){
    if(n==0)
    return 0;
   return n*n + sumsq(n-1); 
}