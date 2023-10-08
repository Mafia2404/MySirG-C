//factorial
#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf(" factorial prog\n %d! is %d",n,f);
    return 0;
}