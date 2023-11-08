#include<stdio.h>
void printsq(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printsq(n);
    return 0;
}
void printsq(int n){
    if(n>0){
        printsq(n-1);
        printf("%d ",n*n);
    }
}