#include<stdio.h>
int q1()
{
    int a[10],i,sum;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(i=0,sum=0;i<=9;i++)
        sum=sum+a[i];
    
    printf("Sum is %d",sum);
    printf("\n");
    return 0;

}
int q2()
{
    int a[10],i,sum;
    float avg;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(i=0,sum=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("Average is %f",avg);
    printf("\n");
    return 0;

}
int q3()
{
    int a[10],i,sumEven=0,sumOdd=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<=9;i++)
        if(a[i]%2==0)
            sumEven=sumEven+a[i];
        else
            sumOdd=sumOdd+a[i];
    
    printf("Sum of even numbers is %d\n",sumEven);
    printf("Sum of odd numbers is %d",sumOdd);
    printf("\n");
    return 0;

}
int q4()
{
    int a[10],i,max;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];

    for(i=1;i<=9;i++)
        if(max<a[i])
            max=a[i];
    
    printf("Greatest Value is %d",max);
    printf("\n");
    return 0;

}
int main()
{
    int a[10],i,min;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    min=a[0];

    for(i=1;i<=9;i++)
        if(min>a[i])
            min=a[i];
    
    printf("Smallest Value is %d",min);
    printf("\n");
    return 0;

}