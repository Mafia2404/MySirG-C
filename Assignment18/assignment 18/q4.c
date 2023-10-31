#include<stdio.h>
int main(){
    int i,j,x,n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x=1;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                printf("%d",x);    
                j<n?x++:x--;
          
                   
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}