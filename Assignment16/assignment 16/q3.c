//check no is in fibo or not
#include<stdio.h>
int main(){
    int x,f1=1,f2=1,i,flag=0,c;
    printf("Enter a no to search:");
    scanf("%d",&x);
    if(x==1){
        printf("Element is present");
        return 0;
    }
    for(i=0;i<20;i++){
        c=f1+f2;
        f1=f2;
        f2=c;
        if(x==c){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element is Present in fibo series");
    }
    else
    printf("Element is not present");
    return 0;
}