#include<stdio.h>
int main(){
    int a,b,i,hcf;
    printf("Enter two no.s:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b ;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    if(hcf==1)
    printf("coprime no");
    else 
    printf("not coprime");
    
    return 0;
}