#include<bits/stdc++.h>

using namespace std;


void cct(vector<int> denoms,int amt){
    vector<int> strg(amt+1,0);

    vector<vector<string>> path;
    //maine yaha par ek galti kari thi.
    //yeah jo for loop likha hai yeah maine uske bina hi path[0] aur baad wale 
    //for loops mein path[i] mein push_back karne lag gaya tha. jabki path[0]
    //path[1],path[2] exist hi nahi karte the
    for(int i=0;i<=amt;i++){
        vector<string> temp;
        path.push_back(temp);
    }

    strg[0]=1;
    
    path[0].push_back("");

    for(int i=0;i<denoms.size();i++){
        for(int j=denoms[i];j<=amt;j++){
            strg[j]+=strg[j-denoms[i]];
            for(string s: path[j-denoms[i]]){
                string temp=s+to_string(denoms[i]);
                path[j].push_back(temp);
            }
        }
    }

    cout<<strg[amt]<<endl;
    for(int i=0;i<path[amt].size();i++){
        cout<<path[amt][i]<<endl;
    }
}

int main(){
    vector<int> denoms={2,3,5,6};
    cct(denoms,10);
	return 0;
}
