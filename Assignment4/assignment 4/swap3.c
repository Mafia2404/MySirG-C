//without using third variable and +- operator
//q6 and q7 are same
#include<stdio.h>
int main(){
    int a=4,b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is %d and b is %d",a,b);
    return 0;
}