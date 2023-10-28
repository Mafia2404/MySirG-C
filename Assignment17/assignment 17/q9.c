#include<stdio.h>
int main(){
    int i,j,k,n;
    int c=64;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=n-i+1;k++){
            printf("%c",c+k);
        }
        c++;
        printf("\n");
    }
    return 0;
}