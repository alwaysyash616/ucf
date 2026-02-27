/*
 Assignment: 09
 Problem: 05
 Topic: Member Functions
Description: Define a class Matrix to represent 3x3 order matrix. Provide appropriate methods and properties to the class. Also define following methods in the class:
    1. Matrix add(Matrix)
    2. Matrix sub(Matrix)
    3. Matrix multiply(Matrix)
    4. Matrix transpose()
    5. bool is_singular()
 Date: 19-01-2026
*/
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int m[3][3];
    public:
        Matrix add(Matrix);
        Matrix sub(Matrix);
        Matrix multiply(Matrix);
};
Matrix Matrix::add(Matrix m2)
{
    int i,j;
    Matrix temp;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            temp.m[i][j]=m[i][j]+m2.m[i][j];
    return temp;
}
Matrix Matrix::sub(Matrix m2)
{
    int i,j;
    Matrix temp;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            temp.m[i][j]=m[i][j]-m2.m[i][j];
    return temp;
}
Matrix Matrix::multiply(Matrix m2)
{
    
}
int main()
{

    return 0;
}
// I AM UNABLE TO SOLVE THIS PROBLEM
// Although, I made the program in C Language, when learned 2-d Array
// But still, I am unable to solve this problem
// Also that time I did take about an hour to solve the problem (I was tired, that time).
// I will commit very soon.