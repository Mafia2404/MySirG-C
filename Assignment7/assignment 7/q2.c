#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n%5==0) //n%5 printf not div else div
    printf(" div by 5");
    else 
    printf("Not div by 5");
    return 0;
}
