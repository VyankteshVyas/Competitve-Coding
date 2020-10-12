#include<bits/stdc++.h>
using namespace std;

void printAllStrings(string que,string ans){
    if(que.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=1;i<=que.size();i++){
        string firstPartOfQue=que.substr(0,i);
        string remPartOfQue=que.substr(i,que.size()-i);
        printAllStrings(remPartOfQue,ans+firstPartOfQue+" ");
    }
}
int main(){
    string str;
    cin>>str;
    printAllStrings(str,"");
    return 0;
}
