#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x)
    {
        y=y*10+x%10;
        x/=10;
    }
    printf("Reverse is %d",y);
    printf("\n");
    return 0;
}
int q4()
{
    int a,b,L;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    printf("LCM is %d",L);

    printf("\n");
    return 0;
}
int q3()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        printf("Prime");
    else
        printf("Not Prime");
    
    
    printf("\n");
    return 0;
}
int q2()
{
    int x,count;
    printf("Enter a number");
    scanf("%d",&x);
    for(count=0;x;x/=10)
    {
        count++;
    }

    printf("Total digits = %d",count);
    printf("\n");
    return 0;
}
int q1()
{
    int n,f=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(n)
    {
        f=f*n;
        n--;
    }
    printf("Factorial is %d",f);
    printf("\n");
    return 0;
}