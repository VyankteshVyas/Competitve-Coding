#include<bits/stdc++.h>

using namespace std;



void pri(vector<int> v){
    for(int i=0;i<31;i++){
        cout<<v[i];
    }
}
int cbpt(int d){
    vector<int> f(d+1,0);
    f[d]=1;
    for(int x=d-1;x>=0;x--){
        for(int dice=1;dice<=6;dice++){
            if(x+dice<=d) f[x]+=f[x+dice];
        }
    }
    return f[0];
}


int main(){
    vector<int> v(31,0);
    cout<<cbpt(10);
	return 0;
}
