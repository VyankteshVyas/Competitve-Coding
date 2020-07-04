#include<bits/stdc++.h>

using namespace std;

class Graph{
    unordered_map<string,list<pair<string,int> > > l;

public:
    void addEdge(string x,string y,bool bidir,int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir){
            l[y].push_back(make_pair(x,wt));
        }
    }

    void printAdjlist(){

        for(pair<string,list<pair<string,int> > > p:l){
            string city=p.first;
            list<pair<string,int> > nbrs=p.second;
            cout<<city<<"->";
            for(pair<string,int> nbr: nbrs){
                string dest=nbr.first;
                int dist=nbr.second;

                cout<<dest<<" "<<dist<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g;
    g.addEdge("A","B",true,20);
    g.addEdge("B","D",true,40);
    g.addEdge("A","C",true,10);
    g.addEdge("C","D",true,50);
    g.addEdge("A","D",false,10);

    g.printAdjlist();
    
   // C->A 10,D 50,
   // B->A 20,D 40,
   // D->B 40,C 50,
  //  A->B 20,C 10,D 10,
  //the output of program will be the above 4 comment . If you want that they 
  //should be arranged lexographically then you can use map instead of unordered map.

	return 0;
}
