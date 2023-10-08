//lcm
#include<stdio.h>
int main(){
    int a,b,n=2;
    printf("Enter two nos:");
    scanf("%d%d",&a,&b);
    while(n%a!=0 || n%b!=0){ // not work for 0
        n++;
     }
     printf("Lcm is %d",n);


    return 0;
}