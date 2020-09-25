#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
    	cin>>s;
    	int arr[26]={0};
    	for(int i=0;i<s.size();i++){
    	    arr[s[i]-'a']++;
    	}
        sort(arr,arr+26,greater<int>());
    	
    	for(int i=0;i<26;i++){
    	    if(arr[i]>1){
    	        int j=0;
    	        while(arr[i]!=1&&j<26){
                    if(i!=j){
                        int diff=min(arr[j],arr[i]-1);
                        arr[j]-=diff;
        	            arr[i]-=diff;
                        
                    }
                    j++;

    	        }
    	    }
    	}
    	int flag=0;
    	for(int i=0;i<26;i++){
            
    	    if(arr[i]>1){
    	        flag=1;

    	    }
    	}

    	if(flag){
    	    cout<<"0"<<"\n";
    	}else cout<<"1"<<"\n";
	}
	return 0;
}
