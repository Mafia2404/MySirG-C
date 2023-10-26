//hcf
#include<stdio.h>
int main(){
    int i,t,a,b;
    printf("Enter two no.:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b ;i++){
        if(a%i==0 && b%i==0){
            t=i;
        }
    }
    printf("HCF if %d",t);
    return 0;
}