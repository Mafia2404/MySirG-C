#include<stdio.h>
void pascal(int);
int bin(int,int);
int fact(int);
int main(){
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
void pascal(int n){
    int i,j,x,t;
    for(i=0;i<n;i++){
        x=1;
        t=0;
        for(j=1;j<=2*n-1;j++){
            if(j>=n-i && j<=n+i){
                if(x){
                printf("%d",bin(i,t++));
        
                }
                else
                printf(" ");
               x=1-x; 
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}
int bin(int n,int r){
   return (fact(n)/fact(n-r)/fact(r));
}
int fact(int n){
    if(n==1 || n==0)
    return 1;
   return n*fact(n-1); 
}