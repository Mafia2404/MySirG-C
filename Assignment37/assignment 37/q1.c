#include<stdio.h>
#include<string.h>
int vowel(char a[]);
int main(){
    char s[]="aeiou";
    char a[20];
    strcpy(a,s);
    strlwr(a);
    printf("no of vowels:%d",vowel(a));
    return 0;
}
int vowel(char a[]){
    int i,count=0;
    strlwr(a);
    for(i=0;a[i];i++){
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='u'||a[i]=='o'||a[i]=='i')
            count++;
    }
    return count;
}