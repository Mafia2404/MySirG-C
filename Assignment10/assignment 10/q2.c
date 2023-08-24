#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("Uppercase");
    else if(c>='a' && c<='z')
    printf("Lowercase");
    else if(c>='0' && c<='9')
    printf("Digit");
    else 
    printf("Special Symbol");
    return 0;
}