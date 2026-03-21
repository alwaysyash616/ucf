/*
 Assignment: 19
 Problem: 01
 Topic: Inheritence
 Description: Define a class Game with an array of 5 int variables as instance member to store the score of each 5 rounds. Provide method to setScore(int round, int score). Also provide method getScore(int round).
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
int main()
{
    Game g1;
    g1.setScore(1,10);
    g1.setScore(2,6);
    g1.setScore(3,9);
    g1.setScore(4,5);
    g1.setScore(5,7);

    cout<<g1.getScore(5);
    cout<<endl;
    return 0;
}