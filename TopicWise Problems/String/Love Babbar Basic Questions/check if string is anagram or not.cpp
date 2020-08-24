#include <bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/anagram/0

int main() {
	int t;
	cin>>t;
	string str1,str2;
	while(t--){
	    cin>>str1>>str2;
	    if(str1.size()!=str2.size()){
	        cout<<"NO"<<endl;
	    }else{
	        int arr1[256]={0};
	        int arr2[256]={0};
	        for(int i=0;i<str1.size();i++){
	            arr1[int(str1[i])]++;
	            arr2[int(str2[i])]++;
	        }
	        int flag=1;
	        for(int i=0;i<256;i++){
	            if(arr1[i]!=arr2[i]) flag=0;
	        }
	        if(flag) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	   
	}
	return 0;
}