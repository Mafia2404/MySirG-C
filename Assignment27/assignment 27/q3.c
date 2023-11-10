#include<stdio.h>
int sumeven(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Sum of %d even no.s is %d",n,sumeven(n-1));
    return 0;
}
int sumeven(int n){
    if(n==0)
    return 0;
   return 2*n + sumeven(n-1); 
}