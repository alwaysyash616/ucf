/*
 Assignment: 17
 Problem: 04
 Topic: Graph Matrix
 Description: In question 1, define a method to print all the adjacent nodes of a given node.
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
        void printGraphMatrix()
        {
            int i,j;
            cout<<"Adjacency Matrix:"<<endl;
            for(i=0;i<v_count;i++)
            {
                for(j=0;j<v_count;j++)
                    cout<<adj[i][j]<<" ";
                cout<<endl;
            }
        }
        void printAdjacentNodes(int v)
        {
            int i;
            bool found=false;
            if(v<0 || v>=v_count)
            {
                cout<<"Invalid Node"<<endl;
                return;
            }
            cout<<"Adjacent nodes of v"<<v<<": ";
            for(i=0;i<v_count;i++)
            {
                if(adj[v][i]==1)
                {
                    cout<<"v"<<i<<" ";
                    found=true;
                }
            }
            if(found==false)
                cout<<"nothing found"<<endl;
        }
};
int main()
{
    // Graph g1(4,3);
    // g1.printGraphMatrix();
    cout<<endl;
    return 0;
}