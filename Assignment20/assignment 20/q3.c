#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    switch(c){
        case 'a' ... 'z':
        printf("Lower case");
        break;

        case 'A' ... 'Z':
        printf("Upper case");
        break;

        default:
        printf("Some other special character");
    }
    return 0;
}