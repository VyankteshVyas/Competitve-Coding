#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n1,n2,n3;
	    cin>>n1>>n2>>n3;
	    vector<int> v1,v2,v3;
	    int temp;
	    for(int i=0;i<n1;i++){
	        cin>>temp;
	        v1.push_back(temp);
	    }
	    for(int i=0;i<n2;i++){
	        cin>>temp;
	        v2.push_back(temp);
	    }
	    for(int i=0;i<n3;i++){
	        cin>>temp;
	        v3.push_back(temp);
	    }
	    int i=0,j=0,k=0;
	    int flag=0;
	    while(i<n1&&j<n2&&k<n3){
	        while(i+1<n1&&v1[i]==v1[i+1]){
	                    i++;
	        }
	        while(j+1<n2&&v2[j]==v2[j+1]){
	            j++;
	        }
	        while(k+1<n3&&v3[k]==v3[k+1]){
	            k++;
	        }
	        if(v1[i]==v2[j]&&v2[j]==v3[k]){
	            flag=1;
	            cout<<v1[i]<<" ";
	            i++;
	            j++;
	            k++;
	        }else{
	            if(v1[i]<v2[j]){
	                
	                i++;
	                
	            }else{
	                if(v2[j]<v3[k]){
	                    j++;
	                }else k++;
	                
	            }
	        }
	    }
	    if(flag==0){
	        cout<<-1;
	    }
	    cout<<"\n";
	}
	return 0;
}