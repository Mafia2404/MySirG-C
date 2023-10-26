#include<stdio.h>
int main()
{
    int a,b, H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    if(H==1)
        printf("Co-Prime numbers");
    else
        printf("Not co-prime numbers");
    printf("\n");
    return 0;

}
int q4()
{
    int a,b, H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    printf("HCF= %d",H);
    printf("\n");
    return 0;

}
int q3()
{
    int i,x;
    printf("Enter  a number: ");
    scanf("%d",&x);

    for(x++;;x++)
    {
        for(i=2;i<=x-1;i++)
            if(x%i==0)
                break;

        if(i==x)
        {
            printf("%d ",x);
            break;
        }
    }
    printf("\n");
    return 0;
}
int q2()
{
    int i,x,l,u;
    printf("Enter lower and upper limit");
    scanf("%d%d",&l,&u);
    if(l>u)
    {
        l=l+u;
        u=l-u;
        l=l-u;
    }
    for(x=l;x<=u;x++)
    {
        for(i=2;i<=x-1;i++)
            if(x%i==0)
                break;

        if(i==x)
            printf("%d ",x);
    }
    printf("\n");
    return 0;
}
int q1()
{
    int i,x;
    
    for(x=2;x<=99;x++)
    {
        for(i=2;i<=x-1;i++)
            if(x%i==0)
                break;

        if(i==x)
            printf("%d ",x);
    }
    printf("\n");
    return 0;
}