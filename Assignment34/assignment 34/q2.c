#include<stdio.h>
int main(){
    char s[20],x;
    int i,c=0;
    printf("Enter a string:");
    gets(s);
    printf("Enter the charcter to check occurence:");
    scanf("%c",&x);
    for(i=0;s[i]!='\0';i++)
        if(s[i]==x)
            c++;
    printf("Frequency is %d",c);
    return 0;
}