/*
 Assignment: 09
 Problem: 03
 Topic: Member Functions
Description: Define a class TestResult with properties roll_no, right, wrong, net_score. Also define class properties right_weightage, wrong_weightage. Provide methods to set and get all the properties.
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
int main()
{
    TestResult r1,r2;
    r1.setValues(60,15,5,4,1);
    r1.getProperties();
    cout<<endl;
    return 0;
}