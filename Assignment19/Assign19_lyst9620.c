#include<stdio.h>
#include<stdlib.h>
void q1()
{
    int month;
    printf("Enter month number");
    scanf("%d",&month);
    switch(month)
    {
        case 2: 
            printf("28 or 29 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;
        default:
            printf("Invalid Month Number");
    }
}
int menu()
{
    int choice;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    return choice;
}
void q2()
{
    int a,b;
    while(1){
        switch(menu())
        {
            case 1:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Sum is %d",a+b);
                break;
            case 2:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Product is %d",a*b);
                break;
            case 4:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Quotient is %d",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice, retry");
        }
    }
}
void q3()
{
    int day;
    printf("Enter day number");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("Monday is the new beginning");
            break;
        case 2:
            printf("Tuesday is no non veg day");
            break;
        case 3:
            printf("Lets have a cup of coffee");
            break;
        case 4:
            printf("Hello World");
            break;
        case 5:
            printf("Thank God it's Friday");
            break;
        case 6:
            printf("Saturday need to control");
            break;
        case 7:
            printf("Don't wake me up");
            break;
        default:
            printf("\nInvalid day number");
    }
}
void q4()
{
    int a,b,c,choice,t;
    printf("Enter lengths of the sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    while(1){
        printf("\n1. Check for Isosceles triangle");
        printf("\n2. Check for Right Angled Triangle");
        printf("\n3. Check for Equilateral Triangle");
        printf("\n4. Exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        if(a+b>c && a+c>b && b+c>a)
        {
            switch(choice)
            {
                case 1:
                    if(a==b || a==c || b==c)
                        printf("Isosceles Triangle");
                    else
                        printf("Not an Isosceles Triangle");
                    break;
                case 2:
                    if(a>b && a>c)
                    {
                        if(b*b+c*c == a*a)
                            printf("Right Angled Triangle");
                        else
                            printf("Not a right angled triangle");
                    }
                    else if(b>a && b>c)
                    {
                        if(a*a+c*c == b*b)
                            printf("Right Angled Triangle");
                        else
                            printf("Not a right angled triangle");
                    }
                    else if(c>a && c>b)
                    {
                        if(b*b+a*a == c*c)
                            printf("Right Angled Triangle");
                        else
                            printf("Not a right angled triangle");
                    }
                    else
                    {
                        printf("Not a right angled triangle");
                    }
                    break;

                case 3:
                    if(a==b && b==c)
                        printf("Equilateral Triangle");
                    else
                        printf("Not an Equilateral Triangle");
                    break;
                case 4:
                    exit(0);
                default:
                    printf("\n Invalid Choice, Retry");
            }
        }
        else
            printf("Not a valid triangle");
    }
    
}
void q5()
{
    int var;
    printf("Enter a number (1-3): ");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
         printf("good");
         break;
        case 2:
         printf("better");
         break;
        case 3:
         printf("best");
         break;
        default:    
            printf("invalid");

    }

}
int main()
{
    q2();
    printf("\n");
    return 0;
}