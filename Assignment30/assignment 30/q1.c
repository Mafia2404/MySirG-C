#include<stdio.h>
int main(){
    int n,i,j,a[10],t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            if(a[j]>a[i]){
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}