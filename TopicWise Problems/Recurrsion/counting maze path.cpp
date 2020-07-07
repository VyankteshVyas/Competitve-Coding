#include<bits/stdc++.h>

using namespace std;

int cmp(int sr,int sc,int dr,int dc){
    if(sr==dr&&sc==dc) return 1;
    if(sr>dr||sc>dc) return 0;
    int cstod=0;

    int cihtod=cmp(sr,sc+1,dr,dc);
    int civtod=cmp(sr+1,sc,dr,dc);

    cstod=cihtod+civtod;

    return cstod;
}

int main(){
    cout<<cmp(0,0,2,2);
	return 0;
}
