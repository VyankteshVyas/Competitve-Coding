#include <bits/stdc++.h>
using namespace std;

class Graph{
    map<int,vector<int>> g;
public:
    void addEdge(int x,int y){
        g[x].push_back(y);
        g[y].push_back(x);
    }

    void printAdjList(){
        for(pair<int,vector<int>> p:g){
            cout<<p.first<<" : ";
            for(int t:p.second){
                cout<<t<<" ";
            }
            cout<<"\n";
        }
    }

    void bfs(){
        map<int,bool> visited;
        for(pair<int,vector<int>> p: g){
            visited[p.first]=false;
        }

        map<int,bool>::iterator it=visited.begin();
        int src=it->first;

        queue<int> q;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            cout<<curr<<" ";
            for(int t: g[curr]){
                if(visited[t]!=true){
                    q.push(t);
                    visited[t]=true;
                }
            }
        }
    }

    void dfsUtil(int src,map<int,bool> &visited){
        cout<<src<<" ";

        for(int temp:g[src]){
            if(visited[temp]==false){
                visited[temp]=true;
                dfsUtil(temp,visited);
            }
        }
    }

    void dfs(){
        map<int,bool> visited;
        for(pair<int,vector<int>> p:g){
            visited[p.first]=false;
        }
        for(pair<int,bool> p:visited){
            if(p.second==false){
                visited[p.first]=true;
                dfsUtil(p.first,visited);
            }
        }
        cout<<"\n";
    }


};

int main() {
	Graph g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    cout<<"DFS traversal : ";
    g.dfs();
    cout<<"Adjacency list :";
    g.printAdjList();
    cout<<"BFS traversal ";
    g.bfs();
	return 0;
}

