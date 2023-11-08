#include<stdio.h>
void printeven(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printeven(n-1);
    return 0;
}
void printeven(int n){
    if(n>-1){
        printf("%d ",2*n);
        printeven(n-1);
    }
}