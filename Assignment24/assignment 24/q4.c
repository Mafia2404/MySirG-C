#include<stdio.h>
void arm(int,int);
int main(){
    int a,b;
    printf("Enter two no.:");
    scanf("%d%d",&a,&b);
    arm(a,b);
    return 0;
}
void arm(int a,int b){
    int i,s,t,p;
    for(i=a<b?a:b ; i<=(a>b?a:b) ;i++){
          s=i;
          p=0;
        while(s){
            t=s%10;
            p+=t*t*t;
            s/=10;
        }
        if(i==p)
        printf("%d ",i);
    }
}