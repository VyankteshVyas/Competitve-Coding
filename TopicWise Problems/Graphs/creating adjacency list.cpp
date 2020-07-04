#include<bits/stdc++.h>

using namespace std;

class Graph{
int v;
list<int> *l;
public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];

    }

    void addEdge(int x,int y){
        //when we say push_back so l[x] is a linked list and it
        //puts the next address of last node in linked list from null to
        //it's new node address.
        l[x].push_back(y);
        l[y].push_back(x);

    }

    void printAdjlist(){
        for(int i=0;i<v;i++){
            cout<<"Vertex "<<i<<"-> ";
            for(int p: l[i] ){
                cout<<p<<",";
            }
            cout<<endl;
        }
    }


};

int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,2);
    g.addEdge(2,3);

    g.printAdjlist();

	return 0;
}
