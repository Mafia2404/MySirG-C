#include<stdio.h>
void revodd(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    revodd(n);
    return 0;
}
void revodd(int n){
    if(n>0){
        printf("%d ",2*n-1);
        revodd(n-1);
    }
}