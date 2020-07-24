#include<bits/stdc++.h>

using namespace std;


bool isPalindrome(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}

//agar substr mein desired substring ki length se kam string ki length pass karoge 
//then runtime error.

int cpsm(string s,int st,int en,vector<vector<int> > &qb,int &pricou){
    cout<<s<<endl;
    ++pricou;
    if(s.size()==1){
        qb[st][en]=1;
        return 1;
    }
    if(s.size()==0){
        qb[st][en]=0;
        return 0;
    }
    if(qb[st][en]!=0){
        return qb[st][en];
    }
    int cou=0;
    string subStr1=s.substr(0,s.size()-1);
    string subStr2=s.substr(1,s.size()-1);
    string subStr3=s.substr(1,s.size()-2);
    if(isPalindrome(s)) cou++;

    cou = cou + cpsm(subStr1,st,en-1,qb,pricou) + cpsm(subStr2,st+1,en,qb,pricou) - cpsm(subStr3,st+1,en-1,qb,pricou);
    qb[st][en]=cou;
    return cou;
}

int main(){
    vector<vector<int> > qb;
    for(int i=0;i<6;i++){
        vector<int> temp(6,0);
        qb.push_back(temp);
    }
    int pricou=0;
    cout<<cpsm("abccbc",0,5Zz,qb,pricou);
    cout<<"total time function called="<<pricou<<endl;
	return 0;
}
