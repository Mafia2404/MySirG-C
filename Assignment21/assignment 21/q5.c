#include<stdio.h>
void oddnat(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    oddnat(n);
    return 0;
}
void oddnat(int n){
    int x=1;
    while(n!=0){
        n--;
        printf("%d\t",x);
        x=x+2;
    }
}