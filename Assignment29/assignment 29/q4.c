#include<stdio.h>
int main(){
    int n,i,a[10],x;
    printf("Enter the size  of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(i=1;i<n;i++){
        if(x<a[i])
        x=a[i];
    }
    printf("Greatest no. is %d",x);
    return 0;
}