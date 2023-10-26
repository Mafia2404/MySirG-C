#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
        printf("Yes it is divisible by 7 or 3");
    else
        printf("No, it is not divisible by 7 or 3");
    printf("\n");
    return 0;
}
int q4()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
        printf("Yes it is divisible by 2 and 3");
    else
        printf("No, it is not divisible by 2 and 3");
    printf("\n");
    return 0;
}
int q3()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase character");
    if(ch>='a' && ch<='z')
        printf("Lowercase Character");
    printf("\n");
    return 0;
}
int q2()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
        printf("Result: PASS");
        
    else
        printf("Result: FAIL");
    printf("\n");
    return 0;
}
int q1()
{
   float cp,sp,per;
   printf("Enter cost price and selling price of a product");
   scanf("%f%f",&cp,&sp);
   if(sp>=cp)
   {
    //profit
    per=(sp-cp)/cp*100;
    printf("Profit Percentage = %.2f%%",per);
   } 
   else
   {
    //Loss
    per=(cp-sp)/cp*100;
    printf("Loss Percentage = %.2f%%",per);
   }
   printf("\n");
   return 0;
}