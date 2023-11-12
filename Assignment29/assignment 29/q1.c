#include<stdio.h>
int main(){
    int i, a[10],s=0;
    printf("Enter the 10 elements:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("Sum of 10 no is %d",s);
    return 0;

}