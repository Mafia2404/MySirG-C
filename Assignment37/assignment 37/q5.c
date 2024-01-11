#include<stdio.h>
#include<stdbool.h>
bool alphanumeric(char a[]);
int main(){
    char a[]="dsfasdf1asdfaf";
    if(alphanumeric(a))
        printf("alphanumeric");
    else    
        printf("not");
    return 0;
}
bool alphanumeric(char a[]){
    int i,j;
    for(i=0;a[i];i++){
        if((a[i]>='a' &&  a[i]<='z') ||(a[i]>='A' && a[i]<='Z')){
            for(j=0;a[j];j++){
                if(a[j]>='0' && a[j]<='9')
                    return true;
            }
        }
    }
    return false;
}