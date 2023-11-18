#include<stdio.h>
void disp_score_board(int score_board[2][2]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",score_board[i][j]);
        printf("\n");
    }
    
}