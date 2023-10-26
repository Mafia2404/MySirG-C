#include<stdio.h>
//Q8
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    b=a+b-(a=b);
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}
//Q7
/*
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}*/
//Q6
/*
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}*/
//Q5
/*
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}*/
//Q4
/*
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}*/
//Q3
/*int main()
{
    char m='A';

    printf("%c",++m);
    printf("\n");
    return 0;
}*/
//Q1,Q2
/*
int main()
{
    printf("size = %lu",sizeof('A'));
    printf("\nSize=%lu",sizeof(3.14));
    printf("\n");
    return 0;
}*/