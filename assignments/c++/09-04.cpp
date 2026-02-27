/*
 Assignment: 09
 Problem: 04
 Topic: Member Functions
Description: Write a driver function main() to use TestResult class (Question 3). Create an array to 5 TestResult objects, set values to all the objects and display the results in sorted order (by net_score).
 Date: 19-01-2026
*/
#include<iostream>
using namespace std;
class TestResult
{
    private:
        int roll_no;
        int right;
        int wrong;
        int net_score;
        
        int right_weightage;
        int wrong_weightage;
    public:    
        void setValues(int,int,int,int,int);
        void getProperties();
        void calculate_net_score();
        int get_net_score();
};
void TestResult::setValues(int id,int r,int w,int r_w,int w_w)
{
    roll_no=id;
    right=r;
    wrong=w;
    right_weightage=r_w;
    wrong_weightage=w_w;
}
void TestResult::getProperties()
{
    cout<<"Roll Number: "<<roll_no<<endl;
    cout<<"Correct Answers: "<<right<<endl;
    cout<<"Incorrect Answers: "<<wrong<<endl;
    calculate_net_score();
    cout<<"Net Score: "<<net_score<<endl;
    cout<<"Weightage: "<<endl;
    cout<<"+"<<right_weightage<<" for each correct"<<endl<<"-"<<wrong_weightage<<" for each incorrect"<<endl;
}
void TestResult::calculate_net_score()
{
    net_score=right*right_weightage-wrong*wrong_weightage;
}
int TestResult::get_net_score()
{
    return net_score;
}
int main()
{
    int i;
    void sort(TestResult[],int);
    TestResult t1[5];
    t1[0].setValues(1,10,10,4,1);
    t1[1].setValues(2,19,1,4,1);
    t1[2].setValues(3,18,2,4,1);
    t1[3].setValues(4,13,7,4,1);
    t1[4].setValues(5,16,4,4,1);
    for(i=0;i<5;i++)
        t1[i].calculate_net_score();
    sort(t1,5);
    for(i=0;i<5;i++)
    {
        cout<<"*******************"<<endl;
        t1[i].getProperties();
    }
    cout<<endl;
    return 0;
}

void sort(TestResult t[],int size)
{
    int i,j;
    TestResult temp;
    for(i=1;i<=size-1;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(t[j].get_net_score()>t[j+1].get_net_score())
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
}
