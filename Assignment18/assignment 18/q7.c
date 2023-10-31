#include<stdio.h>
int main(){
    int i,j,x,k,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x=1;k=1;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i && j<=n-1+i){
            if(x){
                printf("%d",k);
                j<n?k++:k--;
            }
            else{
                printf(" ");
                if(j==n)
                k--;
            }
         x=1-x;   
        }
        else {
            printf(" ");
        }

        }
        printf("\n");
    }
    return 0;
}