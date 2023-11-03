#include<stdio.h>
int evenodd(int);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(evenodd(n)==1){
        printf("Even");
    }
    else
    printf("Odd");
    return 0;
}
int evenodd(int n){
  return n%2==0;
}