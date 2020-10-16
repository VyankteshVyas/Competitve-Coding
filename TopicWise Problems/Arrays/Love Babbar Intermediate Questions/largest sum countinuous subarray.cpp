#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
    while(t--){
    	int sizeOfArray;
    	cin>>sizeOfArray;
    	int x;
    	vector<int> v;
    	for(int i=0;i<sizeOfArray;i++){
    		cin>>x;
    		v.push_back(x);
        }
        int maxSum=v[0];
        int currSum=0;
        for(int i=0;i<sizeOfArray;i++){
            	if(currSum<0){
            		currSum=v[i];
                }else{
            	    currSum+=v[i];
                }
                if(currSum>maxSum){
                	maxSum=currSum;
                }
        }
        cout<<maxSum<<endl;
    	
    }
	return 0;
}
