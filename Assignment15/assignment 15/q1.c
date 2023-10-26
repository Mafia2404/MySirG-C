//prime no btw 1 to 100
#include<stdio.h>
#include<math.h>
int main(){
    int i,j,flag=0;
    printf("All the prime no under 100:\n");
    for(i=2;i<100;i++){
        flag=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("\t%d",i);
    }
    return 0;
}