#include<stdio.h>
int main(){
    int n;
    printf("Enter yr:");
    scanf("%d",&n);
    if(n%4==0){
        if(n%100==0){
            if(n%400==0)
            printf("Leap year");
            else
            printf("Not a leap year");
        }
        else 
        printf("Leap year");
    }
    else
    printf("Not Leap year");

    return 0;
}