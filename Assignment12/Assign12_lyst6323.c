#include<stdio.h>
int main()
{
    int x,i;

    for(i=1;i<=3;i++)
    {
        printf("Enter an even number: ");
        scanf("%d",&x);
        if(x%2==0)
            break;
    }
    if(i==4)
        printf("Game Over");
    else
        printf("You Win");

    printf("\n");
    return 0;
}
int q10()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,i*n);
        i++;
    }
    printf("\n");
    return 0;
}
int q9()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
    printf("\n");
    return 0;
}
int q8()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    printf("\n");
    return 0;
}
int q7()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*n+2-2*i);
        i++;
    }
    printf("\n");
    return 0;
}
int q6()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i);
        i++;
    }
    printf("\n");
    return 0;
}
int q5()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*n+1-2*i);
        i++;
    }
    printf("\n");
    return 0;
}
int q4()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
    printf("\n");
    return 0;
}
int q3()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",n+1-i);
        i++;
    }
    printf("\n");
    return 0;
}
int q2()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
    return 0;
}
int q1()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    printf("\n");
    return 0;
}