#include<stdio.h>
int length(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
char* reverse(char str[])
{
    char ch;
    int i,l;
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return str;
}
int compare(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i]&&s2[i];i++)
    {
        if(s1[i]!=s2[i])
            return s1[i]-s2[i];
    }
    return s1[i]-s2[i];
}
char* uppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    return str;
}
char* lowercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    return str;
}