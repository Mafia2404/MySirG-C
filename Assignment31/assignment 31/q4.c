//In this prog original array is not change coz pass by value
#include<stdio.h>
void rotate(int a[],int n){
    int i,x,j,t;
    char d;
    printf("How much do u want to move:");
    scanf("%d",&x);
    printf("\nIn which direction Left(l) or Right(r):");
    scanf(" %c",&d);
    switch(d){
    case 'l':{
      for(i=1;i<=x;i++){
                t=a[0];
        for(j=0;j<n-1;j++){
                a[j]=a[j+1];
        }
                a[j]=t;
      }  
      for(i=0;i<n;i++)
      printf("%d ",a[i]);
    }
    break;
    
    case 'r':{
        for(i=1;i<=x;i++){
            t=a[n-1];
            for(j=n-1;j>0;j--){
                a[j]=a[j-1];
            }
            a[j]=t;
        }
        for(i=0;i<n;i++)
        printf("%d ",a[i]);

    }
    break;
    default :
    printf("Enter a valid choice");
}}

/*
int main(){
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    rotate(a,n);
    return 0;
}*/