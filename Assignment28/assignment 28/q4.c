#include<stdio.h>
int c=0;
int caldig(int);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("No. of digits are %d\n",caldig(n));
    return 0;
}
int caldig(int n){
    if(n){
        return caldig(n/10)+1;
    }
    else
    return 0;

}