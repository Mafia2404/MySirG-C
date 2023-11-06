#include<stdio.h>
int prog(int);
int fact(int);
int main(){
    int n;
    printf("Enter no of terms:");
    scanf("%d",&n);
    printf("Sum of the series is:%d",prog(n));
    return 0;
}
int fact(int n){
    if(n==1 || n==0)
    return 1;
   return n*fact(n-1); 
}
int prog(int n){
    int i,s=0;
    for(i=1;i<=n;i++){
        s+=fact(i)/i;
    }
    return s;
}