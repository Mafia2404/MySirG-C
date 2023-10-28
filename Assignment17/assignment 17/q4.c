#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the no. rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i-1;k++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}