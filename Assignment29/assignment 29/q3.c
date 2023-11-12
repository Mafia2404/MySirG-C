#include<stdio.h>
int main(){
    int n,i,a[10],s1=0,s2=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2)
        s1+=a[i];
        else
        s2+=a[i];
    }
    printf("Sum of odd no.:%d",s1);
    printf("\nsum of even no.:%d",s2);
    return 0;

}