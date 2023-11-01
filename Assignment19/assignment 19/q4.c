#include<stdio.h>
#include<stdlib.h>
void iso(int ,int ,int);
void eqi(int ,int ,int);
void rig(int ,int ,int);
int main(){
    int n,a,b,c;
    while(1){
       
        printf("1.Check isoceles\n 2.Check right\n 3.Check eqilateral\n 4.exit\n");
         printf("Enter your choice:\n");
        scanf("%d",&n);
        
        switch(n){
            case 1:printf("Enter three sides:");
                    scanf("%d%d%d",&a,&b,&c);
                    iso(a,b,c);
            break;
            case 2:printf("Enter three sides:");
                    scanf("%d%d%d",&a,&b,&c);
                    rig(a,b,c);
            break;
            case 3:printf("Enter three sides:");
                    scanf("%d%d%d",&a,&b,&c);
                    eqi(a,b,c);
            case 4:exit(1);
            break;
            default:printf("Invalide input");
        }
    }
    return 0;
}
void iso(int a,int b,int c){
   int  flag=0;
    if(a==b)
    flag=1;
    if(b==c)
    flag=1;
    if(a==c)
    flag=1;
    if(flag==1)
    printf("Isoceles Triangle");
    else
    printf("Not an Isoceles Triangle");
}
void rig(int a,int b,int c){
    
    int flag=0;
    if(a*a==b*b+c*c)
    flag=1;
    if(b*b==c*c+a*a)
    flag=1;
    if(c*c==a*a+b*b)
    flag=1;
    if(flag==1)
    printf("Eqilateral Triangle");
    else 
    printf("Not Eqilateral Triangle");
}
void eqi(int a,int b,int c){
    if(a==b && b==c)
    printf("Eqilateral Triangle");
    else 
    printf("Not Eqilateral Triangle");
}