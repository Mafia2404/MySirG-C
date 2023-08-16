#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a no>");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2){     //if(n/2*2==n) even else odd
        if(i==n){
        printf("Even");
        return 0;
        }
        
    }
    printf("Odd");
    
}