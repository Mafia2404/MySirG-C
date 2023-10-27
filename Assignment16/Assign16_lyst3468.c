#include<stdio.h>
int main()
{
    int p,x,y,n,r,s,i;
    for(x=1;x<100000;x++)
    {
        s=0;
        y=x;
        for(n=0; y ; n++)
        {
            y/=10;
        }

        y=x;
        while(y)
        {
            r=y%10;
            for(p=1,i=1;i<=n;i++)
            {
                p=p*r;
            }
            s=s+p;
            y=y/10;
        }
        if(s==x)
            printf("%d ",x);
        
    }
    printf("\n");
    return 0;
}

int q4()
{
    int p,x,y,n,r,s=0,i;
    printf("Enter a number");
    scanf("%d",&x);
    y=x;
    for(n=0; y ; n++)
    {
        y/=10;
    }

    y=x;
    while(y)
    {
        r=y%10;
        for(p=1,i=1;i<=n;i++)
        {
            p=p*r;
        }
        s=s+p;
        y=y/10;
    }
    if(s==x)
        printf("%d is an Armstrong number",x);
    else
        printf("%d is not an Armstrong number",x);
    printf("\n");
    return 0;
}

int q3()
{
    int a,b,c=0,x;
    printf("Enter a number ");
    scanf("%d",&x);
    for(a=-1,b=1;c<=x;)
    {
        if(c==x)
        {
            printf("%d is in Fibonacci series",x);
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(c!=x)
        printf("%d is not in Fibonacci series",x);
    
    printf("\n");
    return 0;
}
int q1()
{
    int a,b,c,n;
    printf("Term to print: ");
    scanf("%d",&n);
    for(a=-1,b=1;n;n--)
    {
        c=a+b;   
        a=b;
        b=c;
    }
    printf("%d ",c);
    printf("\n");
    return 0;
}
int q2()
{
    int a,b,c,n;
    printf("How many terms of Fibonacci series? ");
    scanf("%d",&n);
    for(a=-1,b=1;n;n--)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}