#include<stdio.h>
int main(){
    int i ,j,n;
    printf("Enter the no. rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i)
                printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}