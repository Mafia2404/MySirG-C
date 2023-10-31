#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    char c;
    for(i=1;i<=n;i++){
        c=65;
        for(j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i){
                printf("%c",c);
                c++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}