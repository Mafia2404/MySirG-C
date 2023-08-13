#include<stdio.h>
int main(){
    int s;
    char c;
    printf("Enter a charater :");
    scanf("%c",c);
    s=sizeof(c);
    printf("%d",s);
    return 0;
}