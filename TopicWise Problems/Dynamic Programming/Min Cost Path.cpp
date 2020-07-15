#include<bits/stdc++.h>

using namespace std;

int mincostpath(int sr,int sc,int dr,int dc,int costs[][4]){
    int mincstod=0;
    int mincihtod=INT_MAX;
    int mincivtod=INT_MAX;

    if(sr==dr&&sc==dc) return costs[sr][sc];

    if(sr<dr){
        mincivtod=mincostpath(sr+1,sc,dr,dc,costs);
    }

    if(sc<dc){
        mincihtod=mincostpath(sr,sc+1,dr,dc,costs);
    }

    return costs[sr][sc]+min(mincivtod,mincihtod);
}

int main(){
    int costs[4][4] ={
        {2,3,0,4},
        {0,6,5,2},
        {8,0,3,7},
        {2,0,4,2}

    };
    cout<<mincostpath(0,0,3,3,costs);
	return 0;
}
