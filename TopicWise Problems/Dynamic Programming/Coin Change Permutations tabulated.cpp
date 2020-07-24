#include<bits/stdc++.h>

using namespace std;


void ccpt(vector<int> denoms,int amt){
    vector<int> strg(amt+1,0);
    vector<vector<string>> path;
    for(int i=0;i<=amt;i++){
        vector<string> temp;
        path.push_back(temp);
    }

    for(int i=0;i<=amt;i++){
        vector<string> temp;
        path.push_back(temp);
    }

    strg[0]=1;

    path[0].push_back("");

    for(int j=0;j<=amt;j++){
        for(int i=0;i<denoms.size();i++){
            if(j-denoms[i]>=0){
                strg[j]+=strg[j-denoms[i]];
                for(string s: path[j-denoms[i]]){
                    string temp=s+to_string(denoms[i]);
                    path[j].push_back(temp);
                }
            }else break;
        }
    }

    cout<<strg[amt]<<endl;
    for(int i=0;i<path[amt].size();i++){
        cout<<path[amt][i]<<endl;
    }
}

int main(){
    vector<int> denoms={2,3,5,6};

    ccpt(denoms,10);
	return 0;
}
