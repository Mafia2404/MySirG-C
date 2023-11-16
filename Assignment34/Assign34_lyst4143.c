#include<stdio.h>
void f1()
{
    int l;
    char str[50];
    printf("Enter a string");
    fgets(str,50,stdin);
    for(l=0;str[l];l++);
    str[l-1]='\0';
    printf("Length is %d",l-1);
}
void f2()
{
    char str[50],ch;
    int count=0,i;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    printf("Enter a character: ");
    fflush(stdin);
    scanf("%c",&ch);
    for(i=0;str[i];i++)
        if(str[i]==ch)
            count++;
    printf("Count of %c is %d",ch,count);

}
void f3()
{
    char str[50],V[]="aeiouAEIOU";
    int i,k,count=0;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
        for(k=0;V[k];k++)
            if(str[i]==V[k])
                count++;
    printf("Vowel Count is %d",count);     
}
void f4()
{
    char str[50],ch=' ';
    int count=0,i;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    
    for(i=0;str[i];i++)
        if(str[i]==ch)
            count++;
    printf("Count of space is %d",count);

}
void f5()
{
    char str[50];
    int i;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("%s",str);
}
int main()
{
    f5();
    printf("\n");
    return 0;
}