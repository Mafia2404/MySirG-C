#include<stdio.h>
int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);
}
int sumNOdd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sumNOdd(n-1);
}
int sumNEven(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumNEven(n-1);
}
int sumNSquare(int n)
{
    if(n==1)
        return 1;
    return n*n+sumNSquare(n-1);
}
int sumDigits(int x)
{
    if(x==0)
        return 0;
    return sumDigits(x/10)+x%10;
}