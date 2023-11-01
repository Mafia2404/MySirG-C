#include<stdio.h>
int main(){
    int n;
    printf("Enter your choice from 1-3:");
    scanf("%d",&n);
    switch(n){
        case 1:printf("good");
        break;
        case 2:printf("better");
        break;
        case 3:printf("best");
        break;
        default :printf("invlid");
    }
    return 0;
}