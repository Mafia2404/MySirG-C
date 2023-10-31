#include<stdio.h>

void q1()
{
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&& j<=n-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q2()
{
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&& j<=2*n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q3()
{
    int i,j,x;
    
    for(i=1;i<=4;i++)
    {
        x=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&& j<=3+i)
            {
                if(x)
                    printf("*");
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
void q4()
{
    int i,j,n,k;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&& j<=n-1+i)
            {
                printf("%d",k);
                j<n?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q5()
{
    int i,j,n;
    char k;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='A';   
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&& j<=2*n-i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q6()
{
    int i,j,n;
    char k;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='A';   
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&& j<=2*n-i)
            {
                printf("%c",k);
                j<n?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q7()
{
    int i,j,x,k;
    
    for(i=1;i<=5;i++)
    {
        k=1;
        x=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&& j<=4+i)
            {
                if(x){
                    printf("%d",k);
                    j<5?k++:k--;
                }
                else{
                    printf(" ");
                    if(j==5)
                        k--;
                }
                x=1-x;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void q8()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
}
void q9()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else    
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}
void q10()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else    
            {
                printf(" ");
                if(j==4)
                    k--;
            }
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