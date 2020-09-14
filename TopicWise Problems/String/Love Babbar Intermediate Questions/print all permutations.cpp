#include<bits/stdc++.h>
using namespace std;

void printAllPerm(string qs,string as){
    if(qs.size()==0){
        cout<<as<<endl;
        return;
    }
    for(int i=0;i<qs.size();i++){
        string mqs=qs;
        mqs.erase(i,1);
        printAllPerm(mqs,as+qs[i]);
    }

}

int main(){
    string str;
    cin>>str;
    printAllPerm(str,"");
    return 0;
}
