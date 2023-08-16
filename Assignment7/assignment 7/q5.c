#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    //using bitwise operator
    if((n&1)==0) //n is and with 1 if ans is 1 then odd else even 
    printf("Even");
    else
    printf("Odd");
    return 0;
}