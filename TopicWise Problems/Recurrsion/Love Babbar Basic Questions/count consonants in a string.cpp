#include<bits/stdc++.h>
using namespace std;

int iterativeTotalConsonants(string str){
    int totalConsonants=0;
    for(int i=0;i<str.size();i++){
        char c=str[i];
        if(c-'a'>=0&&'z'-c>=0&&c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
            totalConsonants++;
        }
    }
    return totalConsonants;
}

int recursiveTotalConsonants(string str){
    if(str.size()==0){
        return 0;
    }
    string subStr=str.substr(1,str.size()-1);
    int ans=recursiveTotalConsonants(subStr);
    char c=str[0];
    if(c-'a'>=0&&'z'-c>=0&&c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
            return ans+1;
        }
    return ans;
}

int main(){
    string str="abc de";

    cout<<iterativeTotalConsonants(str)<<endl;
    cout<<recursiveTotalConsonants(str)<<endl;
    return 0;
}
