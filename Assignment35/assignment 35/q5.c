#include<stdio.h>
int main(){
    int i;
    char s[20],x;
    printf("Enter a string:");
    fgets(s,20,stdin);
    printf("Enter a character to search:");
    scanf("%c",&x);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==x){
            printf("Found at %d index",i);
            return 0;
        }
    }
    printf("Character not found!");
    return 0;
}