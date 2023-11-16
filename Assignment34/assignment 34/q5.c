#include<stdio.h>
#include<string.h>
int main(){
    char s[20],i;
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    printf("String is %s",s);
    return 0;
}