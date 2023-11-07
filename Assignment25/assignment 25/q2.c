#include<stdio.h>
void print(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n){
  if(n!=0){
    printf("%d ",n);
    print(n-1);
  }
}