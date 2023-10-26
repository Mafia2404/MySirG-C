//prime no b/w two nos
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i,j,flag=0;
   printf("Enter value of a and b:\n");
   scanf("%d%d",&a,&b);
   if(b>a){
   for(i=a;i<=b;i++){
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
}
    else {
        for(i=b;i<=a;i++){
            flag=0;
            for(j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("%d\t",i);
            
        }
    }
  
    return 0;
}