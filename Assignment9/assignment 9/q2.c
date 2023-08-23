#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter marks of 5 subject:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33){
        if(b>=33){
            if(c>=33){
                if(d>=33){
                    if(e>=33){
                        printf("Student is Passed");
                    }
                    else
                    printf("Student is failed");
                }
                else("Student is failed");
            }
            else
            printf("Student is failed");
        }
        else
        printf("Student is failed");
    }
    else 
    printf("Student is failed");
    return 0;
}