#include<stdio.h>
#include<stdlib.h>
int fact(int);
void oddeven(int);
float area(float);
int sum(int);
int main(){
    int n;
    while(1){
        printf("\n");
        printf("1.Factorial\n2.Check odd or even\n3.Area of circle\n4.Sum of n natural no.s\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1:{ int a;
            printf("Enter a no.:");
            scanf("%d",&a);
            printf("Factorial is %d\n",fact(a));            
            break;
            }

            case 2:{ int a;
                printf("Enter a no.:");
                scanf("%d",&a);
            oddeven(a);
            printf("\n");
            break;   
            }

            case 3:{ float a;
            printf("Enter radius:");
            scanf("%f",&a);
               printf("Area is %f\n",area(a));
            break;
            }

            case 4:{int a;
            printf("Enter a no.:");
            scanf("%d",&a);
                printf("sum is %d\n",sum(a));
            break;
            }

            case 5:printf("Exit");
            exit(0);
            
            default:
            printf("Invalid choice enter again!\n");

        }
    }
    return 0;
}
//function definition
int fact(int a){
    if(a==1)
    return 1;
return a*fact(a-1);    
}

void oddeven(int a){
    if(a%2==0)
    printf("Even");
    else
    printf("Odd");
   }

float area(float a){
    return 3.14*a*a;
}

int sum(int a){
    if(a==1)
    return 1;
  return a+sum(a-1);  
}