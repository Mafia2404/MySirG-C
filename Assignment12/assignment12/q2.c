// n natural no
#include<stdio.h>
int main(){
    int n,t=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    while(t!=(n+1)){
        printf("%d\n",t);
        t++;
    }
    return 0;
}