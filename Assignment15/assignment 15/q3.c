#include<stdio.h>
#include<math.h>
int main(){
    int n,t,i,flag=0;
    printf("Enter a no:");
    scanf("%d",&n);
    t=n+1;
    if(n==1 || n==2)
    flag=1;
    while(flag==0){
        for(i=2;i<=sqrt(t);i++){
            if(t%i==0){
                t++;
                flag=0;
                break;
            }
            else flag=1;

        }    
           
    }
    printf("%d",t);
return 0;
}