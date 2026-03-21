/*
 Assignment: 19
 Problem: 03
 Topic: Inheritence
 Description: Define a class Actor with name, age as instance variables and setter, getters as instance methods. Define a class TVActor as a derived class of Actor with instance variable to store number of TV projects done or running and define setter, getter. Also define setTVActor() and showTVActor(). Define a class MovieActor as a derived class of Actor with instance variable to store number of movies doe or running and define setter, getter. Also define setMovieActor() and showMovieActor(). Derive a class AllScreenActor from TVActor and MovieActor. Define a method to setActorData() and showActorData().
 Date: 03-02-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Actor
{
    private:
        char name[20];
        int age;
    public:
        void setName(char n[])
        {
            strcpy(name,n);
        }
        void setAge(int a)
        {
            age=a;
        }
        char* getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};
class TVActor:virtual public Actor
{
    private:
        int tvprojects;
    public:
        void setTVProjects(int n)
        {
            tvprojects=n;
        }
        int getTVProjects()
        {
            return tvprojects;
        }
        void setTVActor(char n[])
        {
            setName(n);
        }
        void showTVActor()
        {
            cout<<getName()<<endl;
        }
};
class MovieActor:virtual public Actor
{
    private:
        int moviesdone;
    public:
        void setMoviesDone(int n)
        {
            moviesdone=n;
        }
        int getMoviesDone()
        {
            return moviesdone;
        }
        void setMovieActor(char n[])
        {
            setName(n);
        }
        void showMovieActor()
        {
            cout<<getName()<<endl;
        }
};
class AllScreenActor:public TVActor,public MovieActor
{
    public:
        void setActorData(char n[],int a,int tvp,int mov)
        {
            setName(n);
            setAge(a);
            setTVProjects(tvp);
            setMoviesDone(mov);
        }
        void showActorData()
        {
            cout<<getName()<<endl;
            cout<<"Age: "<<getAge()<<endl;
            cout<<"TV Projects: "<<getTVProjects()<<endl;
            cout<<"Movies: "<<getMoviesDone()<<endl;
        }
};
int main()
{
    AllScreenActor a1;
    a1.setActorData("Shah Rukh Khan",60,44,98);
    a1.showActorData();
    cout<<endl;
    return 0;
}
