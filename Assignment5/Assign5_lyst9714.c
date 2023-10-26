#include<stdio.h>
//Q5
int main()
{
    int x,digit;
    printf("enter a number");
    scanf("%d",&x);
    printf("Enter a digit");
    scanf("%d",&digit);
    x=x*10+digit;
    printf("%d",x);
    printf("\n");
    return 0;
}
//Q4
int q4()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    x=x/10*10;
    //x=x-x%10;
    printf("%d",x);
    printf("\n");
    return 0;
}
//Q3
int q3()
{
    int x;
    float y;
    double z;
    char ch;
    printf("%d %d %d %d",sizeof(x),sizeof(y),sizeof(z),sizeof(ch));
    printf("\n");
    return 0;
}
//Q2
int q2()
{
    char ch='+';
    printf("%d",ch);
    printf("\n");
    return 0;
}
//Q1
int q1()
{
    int x,s;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    s=x%10+x/10%10+x/10/10;
    printf("Sum of digits=%d",s);
    printf("\n");
    return 0;
}