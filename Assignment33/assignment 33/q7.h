#include<stdio.h>
int return_score(int score_board[2][2],int t){
    int i,j;
    if(t==1)
        return score_board[0][0];
    else if(t==2)
        return score_board[0][1];
    else if(t==3)
        return score_board[1][0];
    else if(t==4)
        return score_board[1][1];
    else 
        return 0;

}