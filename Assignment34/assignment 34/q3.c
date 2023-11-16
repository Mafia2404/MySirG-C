#include<stdio.h>
int main(){
    char s[20];
    printf("Enter a string:");
    gets(s);
    int i,c=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||
        s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I'){
            c++;
        }
    }
    printf("No of Vowels are:%d",c);
    return 0;
}
