//even natural no:
#include<stdio.h>
int main(){
    int n,t=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",t);
        t=t+2;
        n--;
    }
    return 0;
}