#include<stdio.h>
void winner(int score_board[2][2]){
    int a[4],i,j,t=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            a[t++]=score_board[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
  
    if(a[0]==score_board[0][0])
    printf("winner is A");

    else if(a[0]==score_board[0][1])
    printf("winner is B");

    else if(a[0]==score_board[1][0])
    printf("winner is C");
    else 
    printf("winner is D");
  
}