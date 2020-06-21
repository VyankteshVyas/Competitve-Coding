#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            v.push_back(temp);
        }
        next_permutation(v.begin(),v.end());
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;

}