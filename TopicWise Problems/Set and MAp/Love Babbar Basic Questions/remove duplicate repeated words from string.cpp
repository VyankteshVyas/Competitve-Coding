#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    unordered_set<string> umap;

    for(int i=0;i<str.size();i++){
       int j=i;
       while(str[j]!=' '&&j!=str.size()){
        j++;

       }
       string mySubStr=str.substr(i,j-i);
         if(umap.find(mySubStr)==umap.end()){
            cout<<mySubStr<<" ";
            umap.insert(mySubStr);
         }
         i=j;

    }
    return 0;
}

