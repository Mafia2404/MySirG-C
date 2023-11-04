#include<stdio.h>
void pf(int);
int main(){
    int n,i;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Prime factors:\n");
    pf(n);
   
    return 0;
}
void pf(int n){
    int i,j;
    for(i=2;i<=n;i++){
        if(n%i==0){
            for(j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(i==j){
                while(n%i==0){
                printf("%d\t",i);
                n=n/i;
            }}
        }
    }
    
}
