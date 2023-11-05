#include<stdio.h>
void nprime(int);
int main(){
    int n;
    printf("Enter no. of prime nos:");
    scanf("%d",&n);
    nprime(n);
    return 0;
}
void nprime(int n){
    int i,j;
    
        
        for(i=2;n;i++){
            for(j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(i==j){
                n--;
                printf("%d\t",i);               
            }
        }
    
}