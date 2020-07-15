#include<bits/stdc++.h>

using namespace std;

int mincostpath(int sr,int sc,int dr,int dc,int costs[][4],int qb[][4]){
    int mincstod=0;
    int mincihtod=INT_MAX;
    int mincivtod=INT_MAX;

    if(qb[sr][sc]!=0) return qb[sr][sc];
    if(sr==dr&&sc==dc) return costs[sr][sc];

    if(sr<dr){
        mincivtod=mincostpath(sr+1,sc,dr,dc,costs,qb);
    }

    if(sc<dc){
        mincihtod=mincostpath(sr,sc+1,dr,dc,costs,qb);
    }
    qb[sr][sc]=costs[sr][sc]+min(mincivtod,mincihtod);
    return qb[sr][sc];
}

int main(){
    int costs[4][4] ={
        {2,3,0,4},
        {0,6,5,2},
        {8,0,3,7},
        {2,0,4,2}

    };
    int qb[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            qb[i][j]=0;
        }
    }
    cout<<mincostpath(0,0,3,3,costs,qb);
	return 0;
}
