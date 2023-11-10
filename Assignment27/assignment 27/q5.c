#include<stdio.h>
int sumdig(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Sum of digit is %d",sumdig(n));
    return 0;
}
int sumdig(int n){
    if(n==0)
    return 0;
   return n%10 + sumdig(n/10) ;
}