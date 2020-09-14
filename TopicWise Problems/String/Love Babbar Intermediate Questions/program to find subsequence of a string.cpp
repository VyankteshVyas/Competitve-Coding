#include<bits/stdc++.h>
using namespace std;

//check out other two methods
//also see space and time complexity of this method.

vector<string> printSubSequences(string s){
    if(s.size()==0){
        vector<string> v;
        v.push_back("");
        return v;
    }

    string remString=s.substr(1,s.size()-1);
    char c=s[0];
    vector<string> resultantString=printSubSequences(remString);
    int returnStringSize=resultantString.size();
    for(int i=0;i<returnStringSize;i++){
        resultantString.push_back(c+resultantString[i]);
    }
    return resultantString;
}

int main(){
    string s;
    cin>>s;
    vector<string> ans=printSubSequences(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
