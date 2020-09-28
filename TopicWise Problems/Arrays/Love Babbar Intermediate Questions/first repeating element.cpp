#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    int x;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    set<int> mySet;
	    int minIndex=-1;
	    for(int i=n-1;i>=0;i--){
	        if(mySet.find(v[i])!=mySet.end()){
	            minIndex=i+1;
	        }else{
	            mySet.insert(v[i]);
	        }
	    }
	    cout<<minIndex<<"\n";
	    
	}
	return 0;
}