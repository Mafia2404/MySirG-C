#include<stdio.h>
int small(int a[],int);
int main(){
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Smallest no. in an array:%d",small(a,n));
    return 0;
}
int small(int a[],int n){
    int i,x;
    x=a[0];
    for(i=1;i<n;i++){
        if(x>a[i])
        x=a[i];
    }
    return x;
}