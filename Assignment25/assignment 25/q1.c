#include<stdio.h>
void print1(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    print1(n);
    return 0;
}
void print1(int n){
    if(n>0){
        print1(n-1);
        printf("%d ",n);
    }
}
    