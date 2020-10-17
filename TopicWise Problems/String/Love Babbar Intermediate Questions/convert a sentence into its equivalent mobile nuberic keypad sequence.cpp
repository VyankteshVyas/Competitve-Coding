#include<bits/stdc++.h>
using namespace std;

string keypadSequence(string str,vector<string> keyMap){
    string ans="";
    for(int i=0;i<str.size();i++){
        ans+=keyMap[str[i]-'A'];
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    vector<string> v={"2","22","222",
                        "3","33","333",
                        "4","44","444",
                        "5","55","555",
                        "6","66","666",
                        "7","77","777","7777",
                        "8","88","888",
                        "9","99","999","9999"
                    };
    cout<<keypadSequence(str,v)<<endl;
    return 0;
}


