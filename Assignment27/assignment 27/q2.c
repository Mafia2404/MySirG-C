#include<stdio.h>
int sumodd(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Sum of %d odd no is %d",n,sumodd(n));
    return 0;
}
int sumodd(int n){
    if(n==0)
    return 0;
   return (2*n-1) + sumodd(n-1); 
}