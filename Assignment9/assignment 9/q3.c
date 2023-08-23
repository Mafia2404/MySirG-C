#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("Upper case");
    else
    printf("Lower case");

    return 0;
}