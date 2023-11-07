#include<stdio.h>
void print3(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    print3(n);
    return 0;
}

void print3(int n){
    if(n>0){
        print3(n-1);
        printf("%d ",2*n-1);
    }
    
}