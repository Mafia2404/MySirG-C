#include<stdio.h>
void printoct(int);
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printoct(n);
    return 0;
}
void printoct(int n){
    if(n!=0){
        printoct(n/8);
        printf("%d ",n%8);
    }
}