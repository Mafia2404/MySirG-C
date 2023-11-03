#include<stdio.h>
void pnat(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    pnat(n);
    return 0;
}
void pnat(int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d\t",i);
    }
}