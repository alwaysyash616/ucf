/*
 Assignment: 07
 Problem: 05
 Topic: forward_list
 Description: Create a forward_list to represent a polynomial expression.
 Date: 03-03-2026
*/
#include<iostream>
#include<forward_list>
using namespace std;
class Term
{
    public:
        int coeff;
        int exp;
};
void inputPolynomial(forward_list <Term>&);
void printPolynomial(forward_list <Term>&);
Term inputTerm(int);
void printTerm(Term);
int main()
{
    forward_list <Term> poly;
    inputPolynomial(poly);

    cout<<"\nPolynomial: ";
    printPolynomial(poly);
    cout<<endl;
    return 0;
}

void inputPolynomial(forward_list <Term> &p)
{
    forward_list<Term>::iterator it=p.before_begin();
    Term temp;
    int n=1;
    do
    {
        temp=inputTerm(n++);
        p.insert_after(it,temp);
        it++;
    } while (temp.exp);
}

void printPolynomial(forward_list <Term> &p)
{
    forward_list<Term>::iterator it;
    for(it=p.begin();it!=p.end();it++)
        printTerm(*it);
}

Term inputTerm(int termNo)
{
    Term temp;
    cout<<"Enter coefficient for "<<termNo<<"th term: ";
    cin>>temp.coeff;
    cout<<"Enter exponent for "<<termNo<<"th term: ";
    cin>>temp.exp;
    return temp;
}

void printTerm(Term t)
{
    if(t.coeff>0)
        cout<<"+"<<t.coeff<<"x^"<<t.exp;
    if(t.coeff<0)
        cout<<t.coeff<<"x^"<<t.exp;
}