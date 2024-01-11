#include<stdio.h>
char* swapChar(char a[],int,int);
int main(){
    char str[]="uddhav";
    int x=2,y=4;
    int size=sizeof(str);
    if(x>=0 && y<=size)
        {    
    printf("%s",swapChar(str,x,y));
        }
        else 
            printf("cannot swap");
    return 0;
}
char* swapChar(char a[],int x,int y){
    char t;
    t=a[x];
    a[x]=a[y];
    a[y]=t;
    return a;
}