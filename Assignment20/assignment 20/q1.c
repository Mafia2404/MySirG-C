#include<stdio.h>
int main(){
    int n;
    printf("Enter your marks:");
    scanf("%d",&n);
    switch(n){
        case 90 ... 100: //90 <= n <=100
        printf("A");
        break;
        
        case 80 ... 89:
        printf("B");
        break;

        case 70 ...79:
        printf("C");
        break;

        case 60 ... 69:
        printf("D");
        break;

        case 50 ... 59:
        printf("E");
        break;

        case 0 ... 49:
        printf("F");
        break;


        default :
        printf("Invalid");
    }
    return 0;
}