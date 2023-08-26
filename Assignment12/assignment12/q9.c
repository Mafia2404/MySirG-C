//cube
#include<stdio.h>
int main(){
    int n,t=1;
    printf("Enter a value of n:");
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",t*t*t);
        t++;
        n--;
    }
    return 0;
}