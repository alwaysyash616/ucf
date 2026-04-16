/*
 Assignment: 17
 Problem: 02
 Topic: Graph Matrix
 Description: In question 1, define a method createGraph() to create and store adjacent node information.
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
class Graph
{
    private:
        int v_count;
        int e_count;
        int **adj;
    public:
        Graph(int v,int e)
        {
            v_count=v;
            e_count=e;
            createGraph();
        }
        void createGraph()
        {
            int i,j,u,v;
            adj=new int*[v_count];
            for(i=0;i<v_count;i++)
                adj[i]=new int[v_count];
            for(i=0;i<v_count;i++)
                for(j=0;j<v_count;j++)
                    adj[i][j]=0;
            cout<<"Provide edges"<<endl;
            for(i=0;i<e_count;)
            {
                cin>>u>>v;
                if(u<0 || v<0 || u>=v_count || v>=v_count)
                {
                    cout<<"Invalid Edge"<<endl;
                    continue;
                }
                if(adj[u][v]==1)
                {
                    cout<<"Duplicate Edge"<<endl;
                    continue;
                }
                adj[u][v]=1;
                adj[v][u]=1;
                i++;
            }
        }
};
int main()
{

    return 0;
}