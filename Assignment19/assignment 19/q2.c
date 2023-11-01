//menu driven
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b;
    while(1){
        printf("1.add\n 2.sub\n 3.mul \n 4.div\n 5.exit\n");
        printf("Enter your choice n:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("Enter two no:");
            scanf("%d%d",&a,&b);
            printf("sum is %d\n",a+b);
            break;
            case 2: printf("Enter two no:");
            scanf("%d%d",&a,&b);
            printf("subtraction is %d\n",a-b);
            break;
            case 3: printf("Enter two no:");
            scanf("%d%d",&a,&b);
            printf("multiplication is %d\n",a*b);
            break;
            case 4:printf("Enter two no:");
            scanf("%d%d",&a,&b);
            if(b!=0){
                printf("div is %f\n",a*1.0/b);
            }
            else 
            printf("Enter a valid b");
            break;
            case 5:exit(1);
            break;
            default :printf("Enter a valid choice");
        }
    
    }
    return 0;
}