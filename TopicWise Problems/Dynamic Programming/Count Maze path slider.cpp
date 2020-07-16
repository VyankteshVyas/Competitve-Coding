#include<bits/stdc++.h>

using namespace std;

int cmps(int dr,int dc){
    vector<int> v(dc+1,1);
    for(int i=1;i<=dr;i++){
        for(int j=dc-1;j>=0;j--){
            v[j]+=v[j+1];
        }
    }
    return v[0];
}
int main(){
    cout<<cmps(2,2);
	return 0;
}
