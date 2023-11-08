#include<stdio.h>
void printNEvenReverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        printNEvenReverse(n-1);
    }
}
void printNSquare(int n)
{
    if(n>0)
    {
        printNSquare(n-1);
        printf(" %d",n*n);
    }
}
void dtob(int x)
{
    if(x>=1)
    {
        dtob(x/2);
        printf("%d",x%2);
    }
}
void dtoo(int x)
{
    if(x>=1)
    {
        dtob(x/8);
        printf("%d",x%8);
    }
}
void reverse(int x)
{
    if(x)
    {
        printf("%d",x%10);
        reverse(x/10);
    }
}