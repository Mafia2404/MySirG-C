#include<stdio.h>
#include<stdlib.h>
#include"q6.h"
#include"q7.h"
#include"q8.h"
#include"q4.h"
#include"q9.h"
int main(){
    int score_board[2][2],i,j,x,t;
    int (*p)[2];//[column]
            p=score_board;
            score_board[0][0]=0;
            score_board[0][1]=0;
            score_board[1][0]=0;
            score_board[1][1]=0;
    while(1){
        printf("1.Run Tournament\n2.Display Score Board\n3.Return score of a player\n4.Winner\n5.Rank\n6.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&x);
        switch(x){
            case 1:run_tour(score_board);
            printf("\n");
            break;

            case 2:disp_score_board(score_board);
            printf("\n");
            break;

            case 3:printf("Enter your choice (\n1.A\t2.B\t3.C\t4.D):\n");
                    scanf("%d",&t);
                    printf("Score of %c  is %d",(64+t),return_score(score_board,t));
                    printf("\n");
            break;

            case 4:winner(score_board);
            printf("\n");
            break;

            case 5:disp_rank(score_board);
            printf("\n");
            break;
            
            case 6:
                exit(0);

            default:
                printf("Enter a valid choice\n");
                printf("\n");
        }
    }
}