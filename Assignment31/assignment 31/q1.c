#include<stdio.h>
int great(int a[],int);
int main(){
    int i, n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Greatest element is %d",great(a,n));
    return 0;

}
int great(int a[],int n){
    int i,x;
    x=a[0];
    for(i=1;i<n;i++){
        if(x<a[i])
        x=a[i];
    }
    return x;

}