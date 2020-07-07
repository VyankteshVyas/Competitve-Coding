
#include <bits/stdc++.h>
using namespace std;

class Graph{
    int v;
public:

    Graph(int va){
        v=va;
    }

    map<int,list<int> > l;
    void addEdge(int x,int y){
        l[x].push_back(y);
    }

    bool isCycle(){
        map<int,int> indegree;
        for(pair<int,list<int> > temp : l){
            if(indegree.find(temp.first)==indegree.end()) indegree[temp.first]=0;

            for(int temp1:temp.second){

                if(indegree.find(temp1)!=indegree.end()){
                    indegree[temp1]++;
                }else{
                    indegree[temp1]=1;
                }
            }
        }
        queue<int> q;
        for(pair<int,int> ind:indegree){
            cout<<"indegree ind="<<ind.first<<" value="<<ind.second<<endl;
            if(indegree[ind.second]==0) q.push(ind.first);
        }

        int cnt=0;
        while(!q.empty()){
            int curr=q.front();
            cout<<"curr="<<curr<<endl;
            q.pop();

            list<int>::iterator it;
            for(it=l[curr].begin();it!=l[curr].end();it++){
                if(--indegree[*it]==0){
                    cout<<"pushing in queue "<<*it<<endl;
                    q.push(*it);
                }
            }

            cnt++;
        }

        if(cnt!=v){
            cout<<"cnt="<<cnt<<" v="<<v<<endl;
            return true;
        }

        return false;

    }
};
int main()
{
	Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    if (g.isCycle())
        cout << "Yes";
    else
        cout << "No";
	return 0;
}
