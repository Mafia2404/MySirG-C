#include<stdio.h>
int main(){
    int i,j,n,a[10],t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Second smallest no. is :%d",a[1]);
    return 0;
}