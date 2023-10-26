#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number");
    scanf("%d",&month);
    if(month<1 || month >12)
        printf("Invalid month number");
    else if(month==2)
        printf("28 or 29 days");
    else if(month==4 || month==6 || month==9 || month==11)
        printf("30 Days");
    else
        printf("31 Days");


    printf("\n");
    return 0;
}
int q3()
{
    int a,b,c;
    printf("Enter lengths of sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid Triangle");
    else
        printf("Not a valid triangle");
    printf("\n");
    return 0;
}
int q2()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase character");
    else if(ch>='a' && ch<='z')
        printf("Lowercase Character");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special Character");
    printf("\n");
    return 0;
}
int q1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else if(x<0)
        printf("Negative");
    else
        printf("Zero");
    printf("\n");
    return 0;
}