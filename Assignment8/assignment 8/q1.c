#include<stdio.h>
int main(){
   int n;
   printf("Enter a three dig no:");
   scanf("%d",&n);
    if(n>99 && n<1000)
        printf(" 3 digit No");

    else
    printf("Not 3 digit");
    return 0;
}