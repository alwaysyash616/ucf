/*
 Assignment: 11
 Problem: 01
 Topic: Constructor
 Description: Define a class Numbers with size and arr pointer as instance variables. Provide constructor to initialise instance members, dynamically allocate an array of given size and store address in arr variable of object. Also define destructor to deallocate memory of array. Implement deep copy using copy constructor to avoid memory issues.
 Date: 21-01-2026
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Numbers
{
    private:
        int size, *arr;
    public:
        Numbers(int s,int array[])
        {
            int i;
            size=s;
            arr=(int*)calloc(size,sizeof(int));
            for(i=0;i<size;i++)
            {
                // *(arr+i)=*(array+i);
                arr[i]=array[i];
            }
        }
        ~Numbers()
        {
            free(arr);
        }
        /*Numbers(Numbers &N)
        {
            size=N.size;
            arr=N.arr;
        }*/ // Compiler will define this Copy constructor in case programmer does not defines it.
        Numbers(Numbers &N)
        {
            int i;
            size=N.size;
            arr=(int*)calloc(size,sizeof(int));
            for(i=0;i<size;i++)
            {
                // *(arr+i)=*(N.arr+i);
                arr[i]=N.arr[i];
            }
        }
        void showData()
        {
            cout<<"Size: "<<size<<endl<<"Address: "<<arr<<endl;
            // Printing the values in the array will output the same, and does does not print anything different. So, to show if deep copy is implemented correctly. I tried to print the address, which is stored in arr.
        }
};
int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    Numbers n1(10,num);
    Numbers n2=n1;
    n1.showData();
    n2.showData();
    cout<<endl;
    return 0;
}