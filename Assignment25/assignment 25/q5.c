#include<stdio.h>
void even(int);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    even(n-1);
    return 0;
}
void even(int n){
    if(n>-1){
        even(n-1);
        printf("%d ",2*n);
    }
}