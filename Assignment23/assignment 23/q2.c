#include<stdio.h>
int hcf(int,int);
int main(){
    int a,b;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    printf("Hcf is %d",hcf(a,b));
    return 0;
}
int hcf(int a,int b){
    int i,hcf;
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    return hcf;
}