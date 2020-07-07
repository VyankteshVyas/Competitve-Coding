
#include <bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    map<int,list<int> > l;
public:
    Graph(int va){
        v=va;
    }

    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printShortestDistance(int src,int des){
        map<int ,bool> visited;
        map<int,int> par;
        par[src]=-1;
        for(pair<int,list<int> > temp:l){
            visited[temp.first]=false;
        }

        queue<int> q;
        q.push(src);
        visited[src]=true;
        int flag=1;

        while(!q.empty()&&flag){
            int node=q.front();
            q.pop();
            for(int nbr : l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    par[nbr]=node;
                    visited[nbr]=true;
                }
                if(nbr==des){
                    flag=0;
                     break;
                }
            }
        }

        vector<int> res;
        res.push_back(des);
        while(par[des]!=-1){
            res.push_back(par[des]);
            des=par[des];
        }

        for(int i=res.size()-1;i!=-1;i--){
            cout<<res[i]<<"->";
        }

    }


};
int main()
{
	Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);
    g.addEdge(3,7);
    g.addEdge(4,5);
    g.addEdge(4,6);
    g.addEdge(4,7);
    g.addEdge(5,6);
    g.addEdge(6,7);

    g.printShortestDistance(2,6);
	return 0;
}
