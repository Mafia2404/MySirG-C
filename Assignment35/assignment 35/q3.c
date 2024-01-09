#include<stdio.h>
int main(){
    int i,c=0,a=0,d=0;
    char s[20];
    printf("Enter a string:");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++){
        printf("%c",s[i]);
        if(('a'<=s[i] && 'z'>=s[i])||('A'<=s[i] && 'Z'>=s[i]))
            a++;
        else if(s[i]>='0' && s[i]<='9')
            d++;
        else
            c++;
    }
    printf("No of alphabets are: %d\n",a);
    printf("No of digits are: %d\n",d);
    printf("No of special characters: %d",c-1);// enter press karte hai usse count kar leta hai
    return 0;
}