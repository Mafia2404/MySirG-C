#include<stdio.h>
int lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            return L;
    return 1;
}
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            return H;
    return 1;
}
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int nextPrime(int n)
{
    while(!isPrime(++n));
    return n;
}
void printPrime(int n)
{
    int i,x;
    for(i=1,x=2;i<=n;i++)
    {
        printf("%d ",x);
        x=nextPrime(x);
    }
}
int main()
{
    printPrime(10);
    printf("\n");
    return 0;
}