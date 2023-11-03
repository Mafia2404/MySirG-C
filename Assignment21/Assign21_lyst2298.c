#include<stdio.h>

float area(int r)
{
    return 3.14*r*r;
}
float simpleInterest(int p,float r,int t)
{
    return p*r*t/100;
}
int isEven(int n)
{
    return n%2==0;
}
void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
void printNOdd(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
}