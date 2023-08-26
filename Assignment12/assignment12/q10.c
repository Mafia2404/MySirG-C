//table of n
#include<stdio.h>
int main(){
    int n,t=1,p,a=10;
    printf("Enter value of n:");
    scanf("%d",&n);
    p=n;
    while(a!=0){
    printf("%d*%d=%d\n",p,t,p*t);
    a--;
    t++;
}
return 0;
}