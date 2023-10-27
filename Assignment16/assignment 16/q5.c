//armstrong no under 1000
#include<stdio.h>
int main(){
    int i,u,t,s;
    printf("Armstrong No>");
    for(i=1;i<=1000;i++){
        u=i;
        s=0;
        while(u!=0){
            t=u%10;
            s = s + t*t*t;
            u/=10;
        }
        if(i==s)
        printf("\t%d",i);
        
    }
    return 0;
}