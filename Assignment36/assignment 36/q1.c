#include<stdio.h>
int length(){
    char str[20];
    int i,count=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i];i++){
        count++;
    }
   return count;
}