#include<stdio.h>
int main(){
    int i,j;
    char s[20],t,a[20];
    printf("Enter a string:");
    fgets(s,20,stdin);
    for(t=0;s[t]!='\0';t++);
    for(i=0;s[i]!='\0';i++){
        a[i]=s[i];
    }
    a[i]='\0';
    for(i=0;i<t;i++){
        s[i]=a[t-i-1];
    }
    printf("String in rev order is:%s",s);
    return 0;
}