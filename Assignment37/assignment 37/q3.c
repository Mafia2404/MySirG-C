#include<stdio.h>
int findChar(char a[],int,int,char);
int main(){
    int start=2;
    int end=5;
    char str[]="adsfasdf";
    printf("Element found at %d index",findChar(str,start,end,'a'));
    return 0;
}
int findChar(char a[],int start,int end,char x){
    int i;
    for(i=start;i<=end;i++)
        if(a[i]==x)
            return i;

return -1;
}