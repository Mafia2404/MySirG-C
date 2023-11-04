#include<stdio.h>
int fact(int n)
{
    int i,f;
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}
int iscontain(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num=num/10;
    }
    return 0;
}
void printPrimeFactors(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        i++;
    }
}