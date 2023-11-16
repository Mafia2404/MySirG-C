#include<stdio.h>
int main(){
    int c=0,i;
    char s[20];
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            c++;
        }
    }
    printf("No of spaces are:%d",c);
}