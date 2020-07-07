#include<bits/stdc++.h>

using namespace std;

class Graph{
    map<int,list<int> > l;
public:
    void addEdge(int x,int y){
        l[x].push_back(y);
    }

//    bool isCyclicUtil(int v,map<int,pair<bool,bool>> &vr){
//        if(vr[v].first==false){
//            vr[v].first=true;
//            vr[v].second=false;
//		//may be list<T>::iterator allowed nahi hai shayad where T template. Bcoz it gives error
//            list<int>::iterator i;
//            for(i=l[v].begin();i!=l[v].end();i++){
//                if(!vr[*i].first&&isCyclicUtil(*i,vr)){
//                    return true;
//                }else{
//                    if(vr[*i].second==true) return true;
//                }
//            }
//        }
//        vr[v].second=false;
//        return false;
//    }


    bool isCyclicUtil(int node,map<int,pair<bool,bool> > &vr){
        vr[node].first=true;
        vr[node].second=true;

        for(int nbr : l[node]){
            if(!vr[nbr].first&&isCyclicUtil(nbr,vr)){
                return true;
            }else{
                if(vr[nbr].second==true) return true;
            }
        }
        vr[node].second=false;
        return false;
    }


    bool isCyclic(){
        map<int,pair<bool,bool> > vr;
        for(pair<int,list<int> > temp:l){
            vr[temp.first]=make_pair(false,false);
        }

//        for(pair<int,list<int> > temp:l){
//            if(isCyclicUtil(temp.first,vr)) return true;
//        }
        for(pair<int,list<int> > temp:l){
            if(isCyclicUtil(temp.first,vr)) return true;
        }

        return false;
    }

};



int main(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    if(g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";

	return 0;
}
