#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cin.ignore(0);
    int n=str.size();
    for(int i=0;i<str.size()/2;i++){
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    cout<<str<<endl;
    return 0;
}
