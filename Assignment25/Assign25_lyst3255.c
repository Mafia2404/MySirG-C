#include<stdio.h>
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf(" %d",n);
    }
}
void printNReverse(int n)
{
    if(n>0)
    { 
        printf("%d ",n);
        printNReverse(n-1);
    }
}
void printNOdd(int n)
{
    if(n>0)
    {
        printNOdd(n-1);
        printf(" %d",2*n-1);
    }
}
void printNOddReverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        printNOddReverse(n-1);
    }
}
void printNEven(int n)
{
    if(n>0)
    {
        printNEven(n-1);
        printf(" %d",2*n);
    }
}

