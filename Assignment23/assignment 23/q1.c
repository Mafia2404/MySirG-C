#include<stdio.h>
int lcm(int ,int);
int main(){

    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("lcm is %d",lcm(a,b));
    return 0;
}
int lcm(int a,int b){
    int L,lcm;
    for(L=(a>b?a:b);L<=a*b;L++){
        if(L%a==0 && L%b==0){
            lcm=L;
            break;
        }
    }
return lcm;
}

