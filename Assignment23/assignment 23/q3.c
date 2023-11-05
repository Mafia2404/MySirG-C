#include<stdio.h>
int prime(int);
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    if(prime(n))
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}
int prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    if(i==n)
    return 1;
    else 
    return 0;
}