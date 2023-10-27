//n terms of fibo
#include<stdio.h>
int main(){
    int f1=1,f2=1,i,c,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("%d\t%d",f1,f2);
    for(i=0;i<n-2;i++){
        c=f1+f2;
        f1=f2;
        f2=c;
        printf("\t%d",c);
    }
    return 0;

}