#include<stdio.h>
int main(){
    int i,j,x;
    for(i=1;i<=4;i++){
        x=1;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                if(x)
                printf("*");

                else
                printf(" ");
            x=1-x;    
            }
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}