#include<bits/stdc++.h>
using namespace std;

#define V 4
#define INF 9999

//Time complexity O(V^3) here V is no. of vertices.
//https://www.geeksforgeeks.org/floyd-warshall-algorithm-dp-16/

void printsolution(int graph[][V]);

void floydWarshall(int graph[][V]){

    int intermediate,start,terminal;
    for(intermediate=0;intermediate<V;intermediate++){
        for(int start=0;start<V;start++){
            for(int terminal=0;terminal<V;terminal++){

                if(graph[start][intermediate]+graph[intermediate][terminal]<graph[start][terminal]){
                    graph[start][terminal]=graph[start][intermediate]+graph[intermediate][terminal];
                }
            }
        }
    }

    printsolution(graph);
}

void printsolution(int graph[][V]){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){

    int graph[V][V] = { {0, 5, INF, 10},
                        {INF, 0, 3, INF},
                        {INF, INF, 0, 1},
                        {INF, INF, INF, 0}
                    };
    floydWarshall(graph);

    return 0;
}

