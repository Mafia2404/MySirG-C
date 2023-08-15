#include<stdio.h>
int main(){
    float n;
    float t;
    printf("Enter the amount is INR:");
    scanf("%f",&n);
    t=n/84.23;
    printf("USSD is %.2f",t);//upto two decimal
    return 0;
}