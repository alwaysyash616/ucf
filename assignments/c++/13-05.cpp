/*
 Assignment: 13
 Problem: 05
 Topic: Operator Overloading
 Description: Consider the following class Array
    class Array
    {
        int *p;
        int size;
        public:
            //methods
    };
 Define constructor to allocate an array of given size (size is given through parameter). Define a subscript operator to access element at given index. Define destructor to deallocates the memory of array.
 Date: 24-01-2026
*/
#include<iostream>
using namespace std;
class Array
{
    int *p;
    int size;
    public:
        Array(int s)
        {
            size=s;
            p=(int*)calloc(size,sizeof(int));
        }
        int& operator [](int index)
        {
            if(index>=0 && index<size)
                return p[index];
            cout<<"Invalid array index";
            return p[0];
        }
        ~Array()
        {
            free(p);
        }
};
int main()
{
    Array a1(5);
    a1.operator [](0)=2;
    a1.operator [](1)=3;
    a1.operator [](2)=5;
    a1.operator [](3)=7;
    a1.operator [](4)=11;

    cout<<a1.operator [](4)<<endl;
    cout<<a1[1]<<endl;
    cout<<endl;
    return 0;
}
