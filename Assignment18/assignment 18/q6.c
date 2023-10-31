#include<stdio.h>
int main(){
    int i,j,n;
    char c;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=64;
        for(j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i){
                j>n?c--:c++;
                printf("%c",c);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}