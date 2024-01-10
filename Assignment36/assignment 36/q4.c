#include<stdio.h>
char* strupper(char str[]){
    int i;
    for(i=0;str[i];i++){
        if('a'<=str[i] && str[i]<='z')
            str[i]=str[i]-32;
    }
    return str;
}