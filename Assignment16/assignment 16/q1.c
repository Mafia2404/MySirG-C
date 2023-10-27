//nth term of fibo
#include<stdio.h>
int main(){
    int n,i,f1=1,f2=1,c;
    printf("enter the no.:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        f1=f2;
        f2=c;
        c=f1+f2;
    }
    printf("%d",c);
}