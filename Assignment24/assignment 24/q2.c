#include<stdio.h>
void fibo(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n){
    int i,j,c;
    for(i=-1,j=1;n;n--){
        c=i+j;
        printf("%d ",c);
        i=j;
        j=c;
    }
}