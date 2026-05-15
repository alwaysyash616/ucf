/*
 Assignment: 08
 Problem: 05
 Topic: deque
 Description: Write a function to find the max frequency element in the deque of int values
 Date: 03-03-2026
*/
#include<iostream>
#include<deque>
using namespace std;
class Element
{
    private:
        int element,frequency;
    public:
        void setData(int e,int f)
        {
            element=e;
            frequency=f;
        }
        int getFrequency() const
        {
            return frequency;
        }
        int getElement() const
        {
            return element;
        }
};
int findMaxFrequencyElement(deque<int>&);
deque<Element> split(deque<int>&);
void sort(deque<int>&);
void swap(deque<int>::iterator,deque<int>::iterator);
int main()
{
    deque <int> d1={2,2,3,3};
    cout<<findMaxFrequencyElement(d1);
    cout<<endl;
    return 0;
}

int findMaxFrequencyElement(deque <int> &d)
{
    if(d.empty())
        return -1;
    deque <Element> subarrays=split(d);
    deque<Element>::const_iterator ans=subarrays.begin();
    for(deque<Element>::const_iterator cit=subarrays.begin();cit!=subarrays.end();cit++)
        if((*cit).getFrequency()>(*ans).getFrequency())
            ans=cit;
    return (*ans).getElement();
}

deque<Element> split(deque <int> &d)
{
    int count=0;
    Element e;
    deque <Element> temp;
    sort(d);
    for(deque<int>::const_iterator cit=d.cbegin();cit!=d.cend();cit++)
    {
        count++;
        if(cit!=d.cend() && *cit!=*(cit+1))
        {
            e.setData(*cit,count);
            temp.push_back(e);
            count=0;
        }
    }
    return temp;
}

void sort(deque <int> &d)
{
    for(int i=1;i<d.size();i++)
        for(deque<int>::iterator j=d.begin();j!=d.end()-i;j++)
            if(*j>*(j+1))
                swap(j,j+1);
}

void swap(deque<int>::iterator i,deque<int>::iterator j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}