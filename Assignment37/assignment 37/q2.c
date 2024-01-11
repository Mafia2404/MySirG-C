#include<stdio.h>
int findChar(char a[],char);
int main(){
    char str[]="dfgasda";
    printf("found at %d index",findChar(str,'a'));
    return 0;
}
int findChar(char a[],char x){
    int i;
    for(i=0;a[i];i++){
        if(a[i]==x){
            return i;            
        }
    }
    return -1;
}