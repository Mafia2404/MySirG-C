#include<stdio.h>
int power(int,int);
int main(){
    int n,p;
    printf("Enter a no. and power:");
    scanf("%d%d",&n,&p);
    printf("Ans is %d",power(n,p));
    return 0;
}
int power(int n,int p){
    if(p)
        return n*power(n,p-1); 
   else
    return 1;
}