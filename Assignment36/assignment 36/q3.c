#include<stdio.h>
#include<stdbool.h>
  bool stringCmp(char str1[],char str2[]){
        int i;
        for(i=0;str1[i];i++){
            if(str1[i]!=str2[i]){
                return true;
            }
        }
        return false;
  }