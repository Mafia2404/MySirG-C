#include<stdio.h>
int main(){
    int n;
    printf("Enter day number of the week from 0-6:");
    scanf("%d",&n);
    switch(n){
        case 1:printf("Happy mon");
        break;
        case 2:printf("Happy tue");
        break;
        case 3:printf("Happy wed");
        break;
        case 4:printf("Happy thur");
        break;
        case 5:printf("Happy fri");
        break;
        case 6:printf("Happy sat");
        break;
        case 0:printf("Happy sun");
        break;
        default :printf("Enter a valid day number");
    }
    return 0;
}