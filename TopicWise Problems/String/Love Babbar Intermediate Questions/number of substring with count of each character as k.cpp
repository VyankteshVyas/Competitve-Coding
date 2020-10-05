#include<bits/stdc++.h>
using namespace std;

bool checkcharfreq(vector<int> v,int k){
    for(int i=0;i<26;i++){
        if(v[i]%k!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int countofSubstr=0;
    for(int i=0;i<=s.size()-k;i++){
        int j=i;
        vector<int> v(26,0);
        while(j<s.size()){
            v[s[j]-'a']++;
            if(v[s[j]-'a']>k){
                break;
            }
            if(v[s[j]-'a']==k&&checkcharfreq(v,k)){
                cout<<i<<" "<<j<<endl;
                countofSubstr++;
            }
            j++;
        }
    }
    cout<<countofSubstr<<endl;

    return 0;
}

