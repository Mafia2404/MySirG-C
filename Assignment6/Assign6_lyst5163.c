#include<stdio.h>
//Q2
int main()
{
    int x;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("%d",x);
    printf("\n");
    return 0;
}
//Q1
int q1()
{
    float INR;
    printf("Enter amount in Indian Rupees: ");
    scanf("%f",&INR);
    printf("US Dollars: %f",INR/84.23);
    printf("\n");
    return 0;
}