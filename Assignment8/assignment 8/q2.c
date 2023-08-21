#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two no.s:");
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("No.s are same %d",a);
        return 0;
    }
    if(a>b)
    printf("a is greater");
    else 
    printf("b is greater");

    return 0;
    
}