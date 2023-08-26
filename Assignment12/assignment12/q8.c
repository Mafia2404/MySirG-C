//square of n natural no
#include<stdio.h>
int main(){
    int n,t=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",t*t);
        t++;
        n--;
    }
    return 0;

}