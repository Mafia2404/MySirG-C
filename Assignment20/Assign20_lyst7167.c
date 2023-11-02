#include<stdio.h>
#include<stdlib.h>
void q1()
{
    int m;
    printf("Enter your marks");
    scanf("%d",&m);
    switch(m)
    {
        case 90 ... 100:  
            printf("GRADE A");
            break;
        case 80 ... 89:
            printf("GRADE B");
            break;
        case 70 ... 79:
            printf("GRADE C");
            break;
        case 60 ... 69:
            printf("GRADE D");
            break;
        case 50 ... 59:
            printf("GRADE E");
            break;
        case 0 ... 49:
            printf("GRADE F");
            break;
        default:
            printf("Invalid Marks");
    }
}
int menu1()
{
    int choice;
    printf("\n1. Factorial ");
    printf("\n2. Even Odd");
    printf("\n3. Area of Circle");
    printf("\n4. Sum of N natural numbers");
    printf("\n5. Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    return choice;
}
void q2()
{
    int n,f;
    while(1)
    {
        switch(menu1())
        {
            case 1:
                printf("Enter a number");
                scanf("%d",&n);
                for(f=1;n;n--)
                    f=f*n;
                printf("\nFactorial is %d",f);
                break;
            case 2:
                printf("Enter a number");
                scanf("%d",&n);
                if(n&1)
                    printf("Odd");
                else
                    printf("Even");
                break;
            case 3:
                printf("Enter radius of a circle: ");
                scanf("%d",&n);
                printf("Area of circle is %f",3.14*n*n);
                break;
            case 4:
                printf("Enter a number");
                scanf("%d",&n);
                for(f=0;n;n--)
                    f=f+n;
                printf("Sum is %d",f);
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid Choice");
        }
    }
}
void q3()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    switch(x)
    {
        case 'A' ... 'Z':
            printf("Uppercase Alphabet");
            break;
        case 'a' ... 'z':
            printf("Lowercase Alphabet");
            break;
        default:
            printf("Special Character");  
    }
}
void q4()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    switch(x)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U': 

            printf("Vowel");
            break;
        case 'b' ... 'd': 
        case 'f' ... 'h':
        case 'j' ... 'n':
        case 'p' ... 't':
        case 'v' ... 'z':
        case 'B' ... 'D': 
        case 'F' ... 'H':
        case 'J' ... 'N':
        case 'P' ... 'T':
        case 'V' ... 'Z':
            printf("Consonant");
            break;
        default:
            printf("Special Character");  
    }
}
int menu2()
{
    int choice;
    printf("\n1. LCM ");
    printf("\n2. Sum of the digits");
    printf("\n3. Volume");
    printf("\n4. Prime");
    printf("\n5. Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    return choice;
}
void q5()
{
    int a,b,c,L,n;
    while(1)
    {
        switch(menu2())
        {
            case 1:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                for(L=a>b?a:b;L<=a*b;L++)
                    if(L%a==0 && L%b==0)
                        break;
                printf("\nLCM is %d",L);
                break;
            case 2:
                printf("Enter a number");
                scanf("%d",&n);
                a=0;
                while(n)
                {
                    a=a+n%10;
                    n=n/10;
                }
                printf("Sum of digits is %d",a);
                break;
            case 3:
                printf("Enter length, breadth and height of a cuboid ");
                scanf("%d%d%d",&a,&b,&c);

                printf("Volume of Cuboid is %d",a*b*c);
                break;
            case 4:
                printf("Enter a number");
                scanf("%d",&n);
                for(a=2;a<n;a++)
                    if(n%a==0)
                        break;
                if(a==n)
                    printf("Prime");
                else
                    printf("Not a Prime");
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid Choice");
        }
    }
}