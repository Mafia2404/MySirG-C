#include<stdio.h>
int adjdup(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1])
            return a[i];
        }
    return 0;
}
/*
int main(){
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(adjdup(a,n)){
        for(i=0;i<n;i++){
            if(adjdup(a,n)==a[i]){
            printf("Element found at %d position",i+1);
            break;
            }
        }
    }
    else
    printf("Element is not found");
    return 0;

}*/