#include<stdio.h>
int main(){
    int l,b,h,v;
    printf("Enter  length ,breath ,height:");
    scanf("%d%d%d",&l,&b,&h);
    v=(l*b*h);
    printf("Volume is:%d",v);
    return 0;
}