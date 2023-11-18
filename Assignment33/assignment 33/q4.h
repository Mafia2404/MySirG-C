#include<stdio.h>
void run_tour(int (*score_board)[2]){
    int i,j,k,x,y,l;
   
           /* for(k=0;k<3;k++){
                for(l=1+k;l<4;l++){
                 printf("Enter for Win:2 , Draw:1 each and Lose:0");    
            printf("\nMatch btw %c and %c the score are:",(65+k),(65+l));
            scanf("%d%d",&x,&y);
        }
    } */          //A and B
            printf("Enter for Win:2 , Draw:1 each and Lose:0");
             printf("\nMatch btw A and B the score are:");
            scanf("%d%d",&x,&y);
                *(*(score_board+ 0) + 0)+=x;
                *(*(score_board + 0)+ 1)+=y;

                //A and C
                printf("Enter for Win:2 , Draw:1 each and Lose:0");
                printf("\nMatch btw A and C the score are:");
                scanf("%d%d",&x,&y);
                *(*(score_board + 0)+ 0)+=x;
                *(*(score_board + 1)+ 0)+=y;

                //A and D
                printf("Enter for Win:2 , Draw:1 each and Lose:0");
                printf("\nMatch btw A and D the score are:");
                scanf("%d%d",&x,&y);
                *(*(score_board +0 )+0 )+=x;
                *(*(score_board + 1)+ 1)+=y;
                
                //B and C
                printf("Enter for Win:2 , Draw:1 each and Lose:0");
                printf("\nMatch btw B and C the score are:");
                scanf("%d%d",&x,&y);
                *(*(score_board + 0)+ 1)+=x;
                *(*(score_board + 1)+ 0)+=y;

                //B and D
                printf("Enter for Win:2 , Draw:1 each and Lose:0");
                printf("\nMatch btw B and D the score are:");
                scanf("%d%d",&x,&y);
                *(*(score_board + 0)+ 1)+=x;
                *(*(score_board + 1)+ 1)+=y;
                
                //C and D
                printf("Enter for Win:2 , Draw:1 each and Lose:0");
                printf("\nMatch btw C and D the score are:");
                scanf("%d%d",&x,&y);
                *(*(score_board + 1)+ 0)+=x;
                *(*(score_board + 1)+ 1)+=y;
}