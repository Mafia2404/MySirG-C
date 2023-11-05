#include<stdio.h>
int nextp(int);
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printf("Next prime no is:%d",nextp(n));
    return 0;
}
int nextp(int n){
    int i,j;
    for(i=n+1;;i++){
        for(j=2;j<i;j++){
            if(n%j==0){
               break;
            }
        }
        if(i==j)
        return i;
    }
}