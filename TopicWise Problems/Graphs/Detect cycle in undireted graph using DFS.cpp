#include<bits/stdc++.h>

using namespace std;


class Graph{
    map<int,list<int> > l;
    int v;
public:
    Graph(int v){
        this->v=v;
    }

    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool cycleHelper(int node,map<int , bool> &visited,int parent){
        visited[node]=true;

        for(int nbr: l[node] ){
            if(!visited[nbr]){
                //remember pair ke 1st aur 2nd element ko access karne ke liye nbr.first use karte hai not nbr->first
                //yeah mistake boht ki hai maine.
                if(cycleHelper(nbr,visited,node)) return true;
            }else{
                if(parent!=nbr) return true;
            }
        }
        return false;

    }

    bool containsCycle(){
        map<int , bool> visited;
        for(pair<int ,list<int> > temp: l) visited[temp.first]=false;

        int src=(*visited.begin()).first;
        return cycleHelper(src,visited,-1);


    }



};



int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 0);

    if(g.containsCycle())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";

	return 0;
}
