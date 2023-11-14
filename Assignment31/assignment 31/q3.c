#include<stdio.h>
void sort(int a[],int);
int main(){
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return  0;
}
void sort(int a[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}