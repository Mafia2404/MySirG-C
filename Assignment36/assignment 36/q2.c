#include<stdio.h>
int length(char str[]){
   
    int i,count=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i];i++){
        count++;
    }
   return count;
}
char* stringRev(char str[]){
    int i,n=length(str)-1;
    char temp;
    
    for(i=0;i<n;i++){
        temp=str[i];
        str[i]=str[n-i];
        str[n-i]=temp;
    }
}