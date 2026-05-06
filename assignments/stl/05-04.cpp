/*
 Assignment: 05
 Problem: 04
 Topic: vector
 Description: Given vector has integer values stored in it. Write a function to delete all the prime numbers from the vector.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
void deleteAllPrimes(vector<int>&);
bool isPrime(int);
int main()
{
    vector <int> v1={2,3,4,5,6,7,8,9};
    vector <int> v2 = {2,3,5,7,11};
    vector <int> v3 = {0,1,2,3,4};
    deleteAllPrimes(v1);
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
void deleteAllPrimes(vector <int> &v)
{
    vector<int>::iterator it;
    for(it=v.end()-1;it!=v.begin()-1;it--)
        if(isPrime(*it))
            v.erase(it);
}

bool isPrime(int n)
{
    int i=2;
    while(i<=n/2)
    {
        if(n%i==0)
            break;
        i++;
    }
    if(i==n/2+1)
        return true;
    else
        return false;
}