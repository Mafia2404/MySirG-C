#include<stdio.h>
int main(){
    int i,j,n,a[10],b[10];
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array a is:\n");
    for(i=0;i<n;i++){
        b[i]=a[i];
        printf("%d ",a[i]);
    }
    printf("\nCopy of a in b is:\n");
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0;
    
}