#include<stdio.h>

char* strlower(char str[]){
    int i;
    for(i=0;str[i];i++){
        if('A'>=str[i] && str[i]<='Z')
            str[i]=str[i]+32;
    }
    return str;
}