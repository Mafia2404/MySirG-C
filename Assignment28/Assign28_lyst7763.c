#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        else
            return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return hcf(a,b%a);
    }
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printFib(int n)
{
    if(n>=0)
    {
        printFib(n-1);
        printf(" %d",fib(n));
    }
    /*
    int i;
    for(i=0;i<=n;i++)
        printf("%d ",fib(i));
    */
}
int countDigits(int x)
{
    if(x==0)
        return 0;
    return countDigits(x/10)+1;
}
double power(double x, double y)
{
    if(y==0)
        return 1;
    if(y>0)
        return power(x,y-1)*x;
    else
        return power(x,y+1)/x;
}