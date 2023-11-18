#include<stdio.h>
void disp_rank(int score_board[2][2]){
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
    for(i=0;i<4;i++){
        if(a[i]==score_board[0][0])
    printf("%d:A\n",i+1);

    else if(a[i]==score_board[0][1])
    printf("%d:B\n",i+1);

    else if(a[i]==score_board[1][0])
    printf("%d:C\n",i+1);
    else 
    printf("%d:D\n",i+1);
    }
}