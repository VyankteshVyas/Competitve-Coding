#include<bits/stdc++.h>
using namespace std;

int maxGold(int n,int m,vector<vector<int>> &dp,vector<vector<int>> v){
    
    if(m==v[0].size()-1){
        return v[n][m];
    }
    
    if(dp[n][m]!=0){
        return dp[n][m];
    }
    
    int ans;
    int luv=0,ruv=0,fv=0;
    if(n-1>=0){
        luv=maxGold(n-1,m+1,dp,v);
    }
    
    fv=maxGold(n,m+1,dp,v);
    
    if(n+1<v.size()){
        ruv=maxGold(n+1,m+1,dp,v);
    }
    
    dp[n][m]=v[n][m]+max(luv,max(ruv,fv));
    return dp[n][m];
    
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> temp;
        int x;
        for(int j=0;j<m;j++){
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    vector<vector<int>> dp;
    for(int i=0;i<n;i++){
        vector<int> temp(m,0);
        temp[m-1]=v[i][m-1];
        dp.push_back(temp);
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        int tempAns=maxGold(i,0,dp,v);
        if(tempAns>ans){
            ans=tempAns;
        }
    }
    
    cout<<ans;
    
    
    
    return 0;
}