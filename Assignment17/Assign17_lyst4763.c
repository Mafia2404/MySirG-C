#include<stdio.h>
void q1()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q2()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q3()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q4()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q5()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q6()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",i-j+1);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q7()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q8()
{
    int i,j,k=1;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q9()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A'+i-1;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q10()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5 || j==1 || j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    q10();
    printf("\n");
    return 0;
}