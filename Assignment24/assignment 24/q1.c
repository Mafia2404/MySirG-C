#include<stdio.h>
void prime(int,int);
int main(){
    int a,b;
    printf("Enter two no.s:");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int a, int b){
    int i,j;
   
    for(i=a<b?a:b ; i<=(a>b?a:b) ;i++){  
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j)
        printf("%d ",i);
    }
}