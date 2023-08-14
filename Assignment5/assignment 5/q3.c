#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    double d;
    printf("Size of int variable is %d bytes\n",sizeof(a));
    printf("Size of char variable is %d byte\n",sizeof(b));
    printf("Size of float variable is %d bytes\n",sizeof(c));
    printf("Size of double variable is %d bytes\n",sizeof(d));
    return 0;
}