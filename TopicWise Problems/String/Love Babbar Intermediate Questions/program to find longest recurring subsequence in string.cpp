#include<bits/stdc++.h>
using namespace std;

int lcs(int i,int j,string s1,string s2,vector<vector<int>> &qb){
    if(i>=s1.size()||j>=s2.size()){
        return 0;
    }

    if(qb[i][j]!=-1){
            return qb[i][j];
    }

    if(s1[i]==s2[j]&&i!=j){
        qb[i][j]=1+lcs(i+1,j+1,s1,s2,qb);
        return qb[i][j];
    }

    qb[i][j]=max(lcs(i,j+1,s1,s2,qb),lcs(i+1,j,s1,s2,qb));
    return qb[i][j];
}

int main(){
    string s1;
    cin>>s1;
    
    vector<vector<int>> qb;
    for(int i=0;i<s1.size();i++){
        vector<int> temp(s2.size(),-1);
        qb.push_back(temp);
    }
    cout<<lcs(0,0,s1,s1,qb);
    return 0;
}
