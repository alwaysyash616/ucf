/*
Assignment: 33
Problem: 08
Topic: Multi-dimensional Arrays
Description:
================================================================================================
4. Four players are playing a tournament of Chess with round robin method (each player will play with every other player). Each win has 2 points, draw has 1 point and loose has 0 points. Declare a score_board two dimensional array to store the scores of the players agains each player.
5. For que-4, define a function to update score_board after each match result.
6. For que-4, define a function to display score_board.
7. For que-4, define a function which returns the score of a specific player
8. For que-4, define a function to find the winner of the tournament.
9. For que-4, define a function to display rank of the players.
10. For que-4, define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.
=================================================================================================
Date: 23-12-2025
*/
#include<stdio.h>
void run_tournament(int [][4]);
void update(int,int,int,int [][4]);
void display(int [][4]);
void player_score(int,int [][4]);
int winner(int [][4]);
void rank(int [][4]);
int main()
{
    int score_board[4][4],p_id;
    run_tournament(score_board);
    display(score_board);
    // printf("Enter player id to find score: ");
    // scanf("%d",&p_id);
    // player_score(p_id,score_board);
    // printf("Winner is Player: %d\n",winner(score_board));
    printf("Rank:\n");
    rank(score_board);
    return 0;
}

void run_tournament(int score_board[][4])
{
    int i,j,score;
    printf("\n     *****Tournament Started*****\n-------------------------------------\n");
    for(i=0;i<4;i++)
    {
        for(j=i;j<4;j++)
        {
            if(i==j)
                update(i,j,0,score_board);
            else
            {
                printf("Enter Player-%d vs Player-%d Score: ",i,j);
                scanf("%d",&score);
                update(i,j,score,score_board);
            }
        }
    }
}

void update(int p1,int p2,int result, int score_board[][4])
{
    if(p1!=p2)
    {
        score_board[p1][p2]=result;
        score_board[p2][p1]=2-result;
    }
    else
    {
        score_board[p1][p2]=result;
        // score_board[p2][p1]=result;
    }
}

void display(int score_board[][4])
{
    int i,j;
    printf("\n  *****Score Board*****\n--------------------------\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d\t",score_board[i][j]);
        printf("\n");
    }
}

void player_score(int p,int score_board[][4])
{
    int j;
    for(j=0;j<4;j++)
        if(p!=j)
            printf("Against player %d: %d\n",j,score_board[p][j]);
}

int winner(int score_board[][4])
{
    int i,j,winner=0,final_score[4]={0,0,0,0};
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i!=j)
                final_score[i]+=score_board[i][j];
    for(i=0;i<4;i++)
        if(final_score[i]>final_score[winner])
            winner=i;
    return winner;
}

void rank(int score_board[][4])
{
    int i,j,k=0,sorted_scores[4],final_score[4]={0,0,0,0};
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(i!=j)
                final_score[i]+=score_board[i][j];
    for(i=0;i<4;i++)
        sorted_scores[i]=final_score[i];
    for(i=0;i<4;i++)
    {
        k=0;
        for(j=0;j<4-i;j++)
        {
            if(sorted_scores[i]>sorted_scores[k])
                k=j;
        }
        if(k!=3-i)
            sorted_scores[k]=(sorted_scores[3-i]+sorted_scores[k])-(sorted_scores[3-i]=sorted_scores[k]);
    }
    for(i=3;i>=0;i--)
        for(j=0;j<4;j++)
        {
            if(sorted_scores[i]==final_score[j]);
                printf("%d\tPlayer - %d\tScore: %d\n",4-i,j,final_score[i]);
        }
}