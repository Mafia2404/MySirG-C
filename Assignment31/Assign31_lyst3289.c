#include<stdio.h>
int max_in_array(int A[],int size)
{
    int i,max;
    max=A[0];
    for(i=1;i<size;i++)
        if(max<A[i])
            max=A[i];
    return max;
}
int min_in_array(int A[],int size)
{
    int i,min;
    min=A[0];
    for(i=1;i<size;i++)
        if(min>A[i])
            min=A[i];
    return min;
}
void sort(int A[],int size)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }

        }
    }
}
void rotate(int A[],int size,int n,int d)
{
    //if d==-1 means left and if d==+1 means right
    int i,temp,j;
    if(d==1)
    {
        for(j=1;j<=n;j++)
        {
            temp=A[size-1];
            for(i=size-2; i>=0;i--)
                A[i+1]=A[i];
            A[0]=temp;
        }
    }
    else
    {
        for(j=1;j<=n;j++)
        {
            temp=A[0];
            for(i=1; i<=size-1;i++)
                A[i-1]=A[i];
            A[size-1]=temp;
        }
    }
}
int findAdjacentDuplicateValue(int A[],int size)
{
    int i;
    for(i=0;i<=size-2;i++)
    {
        if(A[i]==A[i+1])
            return A[i];
    }
    return 0;
}