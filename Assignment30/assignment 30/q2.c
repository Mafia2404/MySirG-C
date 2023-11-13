#include<stdio.h>
int main(){
    int n,i,a[10],x,j,t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Second largest no. in array is:");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[n-2]);
    return 0;
    
}