#include<stdio.h>
int main(){
    int i;
    char s[20],c[20];
    printf("Enter a string:");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++){
        c[i]=s[i];
    }
    c[i]='\0';
    printf("Original string:%s\n",s);
    printf("Copied string:%s",c);
    return 0;
}