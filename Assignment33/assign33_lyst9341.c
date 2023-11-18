#include<stdio.h>
void f1()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter 9 numbers of first Matrix: ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 9 numbers of second Matrix: ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            C[i][j]=A[i][j]+B[i][j];

    printf("Sum of matrices is: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
}
void f2()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter 9 numbers of first Matrix: ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 9 numbers of second Matrix: ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            for(k=0,sum=0;k<=2;k++)
                sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    } 
}
void f3()
{
    int A[3][3],i,j,k,temp;
    printf("Enter 9 numbers of first Matrix: ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    for(i=0,j=1,k=1;k<=3;k++)
    {
        temp=A[i][j];
        A[i][j]=A[j][i];
        A[j][i]=temp;
        if(j-i==1)
            j++;
        else
            i++;
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    } 
}
void update_score_board(int p1,int p2,int result,int score_board[][4])
{
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;
}
void display_score_board(int score_board[][4])
{
    int i,j;
    printf("\nScore Board\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            printf("%d ",score_board[i][j]);
        printf("\n");
    }
}
int get_player_score(int player, int score_board[][4])
{
    int j,sum=0;
    for(j=0;j<=3;j++)
        sum=sum+score_board[player][j];
    return sum;
}
int find_winner(int score_board[][4])
{
    int player, score, winner,s1;
    player=0;
    winner=player;
    score=get_player_score(player,score_board);
    for(++player;player<=3;player++)
    {
        s1=get_player_score(player,score_board);
        if(score<s1)
        {
            winner=player;
            score=s1;
        }
    }
    return winner;
}
void sort(int a[],int n,int player_index[])
{
    int r,t,i;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-r-1;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                t=player_index[i];
                player_index[i]=player_index[i+1];
                player_index[i+1]=t;
            }
        }
    }
}

void show_rank(int score_board[][4])
{
    int player_score[4], scores[4],player_index[4];
    int i;
    for(i=0;i<=3;i++)
    {
        player_score[i]=get_player_score(i,score_board);
        scores[i]=player_score[i];
        player_index[i]=i;
    }
    sort(scores,4,player_index);
    for(i=0;i<=3;i++)
    {
        printf("%d) %d  - Score %d\n",i+1,player_index[i],scores[i]);
    }
}
void f4()
{
    int score_board[4][4]={0};
    update_score_board(0,1,2,score_board);
    update_score_board(0,2,1,score_board);
    update_score_board(0,3,2,score_board);
    update_score_board(1,2,1,score_board);
    update_score_board(1,3,0,score_board);
    update_score_board(2,3,0,score_board);
    show_rank(score_board);
}
int main()
{
    f4();
    printf("\n");
    return 0;
}