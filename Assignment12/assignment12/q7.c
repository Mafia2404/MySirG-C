//even natural no in rev
#include<stdio.h>
int main(){
    int n,t;
    printf("Enter the value of n:");
    scanf("%d",&n);
    t=n*2;
    while(t!=-2){
        printf("%d\n",t);
        t=t-2;
    }
    return 0;
}