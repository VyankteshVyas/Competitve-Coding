#include<bits/stdc++.h>

using namespace std;



void pri(vector<int> v){
    for(int i=0;i<31;i++){
        cout<<v[i];
    }
}
int cbp(int s,int d,vector<int> v){
    if(s>d) return 0;
    if(s==d) return 1;

    if(v[s]!=0) return v[s];
    int cstod=0;
    for(int dice=1;dice<=6;dice++){
        int i=s+dice;
        int citod=cbp(i,d,v);
        cstod+=citod;
    }
    v[s]=cstod;
    return cstod;
}


int main(){
    vector<int> v(31,0);
    cout<<cbp(0,30,v);
	return 0;
}