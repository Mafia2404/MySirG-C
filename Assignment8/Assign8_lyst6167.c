#include<stdio.h>
//Q5
int main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b ? a>c?a:c :b>c?b:c);

    printf("\n");
    return 0;
}
//Q4
int q4()
{
    int year;
    printf("Enter year number");
    scanf("%d",&year);
    if(year%100==0)
        if(year%400==0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    else
        if(year%4==0)
            printf("Leap Year");
        else
            printf("Non Leap Year");

    printf("\n");
    return 0;
}
//Q3
int q3()
{
    int a,b,c;
    printf("Enter values of a,b and c of a quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c >0)
        printf("Real and Distinct Roots");
    else if(b*b-4*a*c<0)
        printf("Imaginary Roots");
    else
        printf("Real and Equal roots");

    printf("\n");
    return 0;
}
//Q2
int q2()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);

    printf("\n");
    return 0;
}
//Q1
int q1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>99 && x<1000 || x>-1000 && x<-99)
        printf("Three digits number");
    else
        printf("Not a three digit number");

    printf("\n");
    return 0;
}
