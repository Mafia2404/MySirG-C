#include<stdio.h>
void p1()
{
    int r,i,a[10],t;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

    for(i=0;i<=9;i++)
        printf("%d ",a[i]);


}
void p2()
{
    int r,i,a[10],t;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=2;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("Second Largest = %d ",a[8]);
}
void p3()
{
    int r,i,a[10],t;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=2;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

    printf("Second Smallest = %d ",a[8]);


}
void p4()
{
    int r,i,a[10],t;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

    for(i=0;i<=9;i++)
        printf("%d ",a[i]);


}
void p5()
{
    int i,a[10],b[10];
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        b[i]=a[i];
    }

    for(i=0;i<=9;i++)
        printf("%d ",b[i]);


}
int main()
{
    p1();
    printf("\n");
    return 0;
}