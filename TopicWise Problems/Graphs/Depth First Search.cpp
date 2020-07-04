#include<bits/stdc++.h>

using namespace std;

template<typename T>

class Graph{
    map<T,list<T> > l;
public:
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    //since this map should remain same in all the function calls
    //we must pass this by reference. you should not make copy of map
    //because it should be common for all the calls
    void dfshelper(T src,map<T,bool> &visited){
    //Recursive function that will traverse the graph

        cout<<src<<" ";
        visited[src]=true;
        //go to all neigbour of that node that is not visited
        for(T nbr:l[src]){
            if(!visited[nbr]){
                dfshelper(nbr,visited);
            }
        }
    }
    void dfs(T src){
        map<T,bool> visited;
        //mark all nodes as not visited in the beginning
        for(auto p:l){
            T node=p.first;
            visited[node]=false;
        }

        dfshelper(src,visited);
    }

};



int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.dfs(0);
    return 0;
}
