#include<stdio.h>
int main(){
    char a[20];
    printf("Enter a string:");
    fgets(a,20,stdin);
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
    printf("String is:%s",a);
    return 0;
}