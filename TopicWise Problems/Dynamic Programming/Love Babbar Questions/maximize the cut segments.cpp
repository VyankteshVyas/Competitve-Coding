#include <bits/stdc++.h>
using namespace std;

int totalSegments(int n,int x,int y,int z){
    vector<int> v(n+1,-1);
    v[0]=0;
    for(int i=0;i<=n+1;i++){
        if(v[i]==-1){
            continue;
        }
        
        if(i+x<=n){
            v[i+x]=max(1+v[i],v[i+x]);
        }
        if(i+y<=n){
            v[i+y]=max(1+v[i],v[i+y]);
        }
        if(i+z<=n){
            v[i+z]=max(1+v[i],v[i+z]);
        }
    }
    
    return v[n];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    
	    cout<<totalSegments(n,x,y,z);
	    cout<<"\n";
	}
	return 0;
}