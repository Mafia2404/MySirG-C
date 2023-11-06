#include<stdio.h>
#include "Assign23.c"
#include "Assign22.c"

void printPrimeBetween(int a,int b)
{
    int x;
    for(x=a+1;x<b;x++)
    {
        if(isPrime(x))
            printf("%d ",x);
    }
}
int fib(int n)
{
    int a=-1,b=1,c;

    while(n+1)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;

}
void printFib(int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
}
void printPascal(int rows)
{
     int i,j,x,n,r;
    
    for(i=1,n=0;i<=rows;i++,n++)
    {
        r=0;
        x=1;
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows+1-i&& j<=rows-1+i)
            {
                if(x)
                    printf("%d",combi(n,r++));
                else
                    printf(" ");
                x=1-x;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
int countDigits(int x)
{
    int count=0;
    while(x)
    {
        count++;
        x/=10;
    }
    return count;
}
int power(int x,int y)
{
    int p=1;
    while(y)
    {
        p=p*x;
        y--;
    }
    return p;
}
void printArmstrongBetween(int a,int b)
{
    int x,n,y,i,s;
    for(x=a+1;x<b;x++)
    {
        n=countDigits(x);
        for(i=1,y=x,s=0;i<=n;i++)
        {
            s=s+power(y%10,n);
            y=y/10;
        }
        if(x==s)
            printf("%d ",x);
    }
}
int seriesSum(int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+fact(i);
    }
    return s;
}
int main()
{
    printArmstrongBetween(1,10000);
    printf("\n");
    return 0;
}