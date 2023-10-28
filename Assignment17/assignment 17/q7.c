//not
#include<stdio.h>
int main(){
    int i,j,n,k;
   printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=n-i+1;k++){
            printf("%c",64+k);
        }
        printf("\n");
    }
    return 0;
}