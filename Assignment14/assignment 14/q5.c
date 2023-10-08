//rev a no:
#include<stdio.h>
int main(){
    int n,t,s=0;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n!=0){
        t=n%10;
        s=s*10+t;
        n=n/10;
        
    }
    printf("Rev no:%d",s);
    return 0;
}