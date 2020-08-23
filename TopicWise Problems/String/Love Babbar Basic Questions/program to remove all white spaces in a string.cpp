#include<bits/stdc++.h>
using namespace std;

void removeWhiteSpaces(string &str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            str[count++]=str[i];
        }
    }
    str=str.substr(0,count);

}

int main(){
    string str;
    getline(cin,str);
    cin.ignore(0);
    removeWhiteSpaces(str);
    cout<<str;
    return 0;
}
