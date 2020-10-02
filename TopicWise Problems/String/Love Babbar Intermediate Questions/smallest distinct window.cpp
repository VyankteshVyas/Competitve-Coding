#include <bits/stdc++.h>
using namespace std;

string findSubstring(string str){

    int minWindowSize=str.size();
    vector<bool> distinctChar(256,false);
    int disCharCount=0;
    for(int i=0;i<str.size();i++){
        if(distinctChar[str[i]]==false){
            disCharCount++;
            distinctChar[str[i]]=true;
        }
    }

    int start=0,startIndex=-1;
    vector<int> charCount(256,0);
    int disChar=0;
    for(int i=0;i<str.size();i++){
        charCount[str[i]]++;
        if(charCount[str[i]]==1){
            disChar++;
        }
        if(disChar==disCharCount){
            while(charCount[str[start]]>1){
                charCount[str[start]]--;
                start++;
            }

            if(minWindowSize>i-start+1){
                minWindowSize=i-start+1;
                startIndex=start;
            }
        }
    }
    return str.substr(startIndex,minWindowSize);

}

int main() {
    string s;
    cin>>s;
    string ans=findSubstring(s);
    cout<<ans.size();
}

