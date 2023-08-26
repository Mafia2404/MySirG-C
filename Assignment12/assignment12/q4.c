//odd no
#include<stdio.h>
int main(){
    int n,t=1;
    printf("Enter n :");
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",t);
        t=t+2;
        n--;
    }
    return 0;
}