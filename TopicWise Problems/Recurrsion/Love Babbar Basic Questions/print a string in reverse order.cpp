#include<bits/stdc++.h>
using namespace std;

void printrevstring(string s){
    if(s.size()==1){
        cout<<s[0];
        return ;
    }
    printrevstring(s.substr(1,s.size()-1));
    cout<<s[0];
}

int main(){
    string str;
    getline(cin,str);
    cin.ignore(0);
    printrevstring(str);
    return 0;
}

