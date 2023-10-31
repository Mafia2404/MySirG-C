#include<stdio.h>
void logic1(void);
void logic2(void);
int main(){
   logic2();
   return 0;
}
//my logic
void logic1(){
    int i,j,n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>=n+2-i && j<=n-2+i){
                printf(" ");
            }
            else
            printf("*");
        }
        printf("\n");
    }
}
//sir logic
void logic2(){
    int i,j,n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j<=n+1-i || j>=n-1+i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
