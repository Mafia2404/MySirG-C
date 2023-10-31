#include<stdio.h>
int main(){
    int i,j,n;
    char c;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=65;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+2-i && j<=n-2+i){
                printf(" ");
                if(j==n)
                c--;
            }
            else{
                printf("%c",c);
                j<n?c++:c--;
            }
        }
        printf("\n");
    }
    return 0;
}