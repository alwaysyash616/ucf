/*
 Assignment: 14
 Problem: 04
 Topic: Operater Overloading, friend operator
 Description: Consider the following class Array
   class Array
   {
      int *p;
      int size;
      public:
         //methods
   };
   Define operator = to perform deep copy of Array objects.
 Date: 26-01-2026
*/
#include<iostream>
using namespace std;
class Array
{
  int *p;
  int size;
  public:
    Array(int s,int a[])
    {
      int i;
      size=s;
      p=(int*)calloc(size,sizeof(int));
      for(i=0;i<size;i++)
      {
        p[i]=a[i];
      }
    }
    ~Array()
    {
      if(p)
        free(p);
      p=NULL;
    }
    Array& operator =(Array &A)
    {
      int i;
      if(p)
        free(p);
      size=A.size;
      p=(int*)calloc(size,sizeof(int));
      for(i=0;i<size;i++)
      {
        p[i]=A.p[i];
      }
      return A; // At this point, I have not studied 'this' keyword. That's why I am returning assigned value which is also same as the object on right hand side of assignment.
    }
    void printArray()
    {
      int i;
      for(i=0;i<size;i++)
        cout<<p[i]<<" ";
    }
};
int main()
{
  int a[5]={10,8,6,4,2},b[10]={1,2,3,4,5,6,7,8,9,10},c[5]={2,3,5,7,11};
  Array a1(5,a),a2(10,b),a3(5,c);
  a1=a2=a3;
  a1.printArray();
  cout<<endl;
  return 0;
}

// I think deep copy is not only the challange here. I think it's also the memory leak problem, for which this problem is concerned about.