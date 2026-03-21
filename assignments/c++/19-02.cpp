/*
 Assignment: 19
 Problem: 02
 Topic: Inheritence
 Description: In question 6, derive a class GameResult with an array of 5 int type variables to store the result in each round. Result value is 2 for win, 0 for loose and 1 for draw. Provide methods to set Result and getResult. Write method to calculate final result of the game.
 Date: 03-02-2026
*/
#include<iostream>
using namespace std;
class Game
{
    private:
        int score[5];
    public:
        void setScore(int r,int s)
        {
            score[r-1]=s;
        }
        int getScore(int r)
        {
            return score[r-1];
        }
};
class GameResult:public Game
{
    private:
        int result[5];
    public:
        static const int WIN=2, LOOSE=0, DRAW=1;
        void setResult(int r,int res)
        {
            result[r-1]=res;
        }
        int getResult(int r)
        {
            return result[r-1];
        }
        void finalResult()
        {
            int totalResult=0,totalScore=0;
            for(int i=0;i<=4;i++)
            {
                totalResult+=result[i];
                totalScore+=getScore(i+1);
            }
            cout<<"Total Result: "<<totalResult<<endl;
            cout<<"Total Score: "<<totalScore<<endl;
        }
};
int main()
{
    GameResult g1;
    g1.setScore(1,10);
    g1.setScore(2,6);
    g1.setScore(3,9);
    g1.setScore(4,5);
    g1.setScore(5,7);

    g1.setResult(1,GameResult::WIN);
    g1.setResult(2,GameResult::DRAW);
    g1.setResult(3,GameResult::LOOSE);
    g1.setResult(4,GameResult::WIN);
    g1.setResult(5,GameResult::DRAW);

    g1.finalResult();
    cout<<endl;
    return 0;
}