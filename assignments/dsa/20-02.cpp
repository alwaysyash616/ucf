/*
 Assignment: 20
 Problem: 02
 Topic: Heap
 Description: In question-1, define a constructor ti initialise member variables.
 Date: 26-02-2026
*/
#include<iostream>
using namespace std;
class Heap
{
    private:
        int capacity,size,*arr;
    public:
        Heap(int cap)
        {
            capacity=cap;
            size=0;
            arr=new int[capacity];
        }
};
int main()
{

    return 0;
}