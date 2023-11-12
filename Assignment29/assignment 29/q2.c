#include<stdio.h>
int main(){
    int n,a[10],i,s=0;
    float avg;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("Avg is %f",s*1.0/n);
    return 0;
}