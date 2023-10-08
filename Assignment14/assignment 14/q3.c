//no is prime or not
#include<stdio.h>
int main(){
    int n,i,flag=0;
    
    printf("Enter a no:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Not prime");
        return 0;

    }
    if(n==1){
        printf("neither prime nor composite");
        return 0;

    }
    for(i=2;i<n;i++){
        if(n%i==0){
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("Not a prime");
    else 
    printf("Prime no");
    return 0;
}