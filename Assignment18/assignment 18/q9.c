#include<stdio.h>
int main(){
    int i,j,x,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x=1;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+2-i && j<=n-2+i){
                printf(" ");
                if(j==n)
                 x--;
            }
            else{
                printf("%d",x);
                j<n?x++:x--;
            }
        }
        printf("\n");
    }
    return 0;
}