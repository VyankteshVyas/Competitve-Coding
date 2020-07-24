#include<bits/stdc++.h>

using namespace std;


vector<string> ccpm(vector<int> denoms,int amt,vector<vector<string>> &qb){
    if(amt==0){

        vector<string> baseresult;
        baseresult.push_back("");
        return baseresult;
    }

    if(amt<0){
        vector<string> baseresult;
        return baseresult;
    }

    vector<string> myresult;
    if(qb[amt].size()!=0) return qb[amt];

    for(int i=0;i<denoms.size();i++){
        vector<string> rresult;
        if(amt-denoms[i]>=0&&qb[amt-denoms[i]].size()!=0){
            rresult=qb[amt-denoms[i]];
        }else{
            rresult = ccpm(denoms,amt-denoms[i],qb);

        }

        for(string s: rresult){
            //yaha par maine ek galti kar di thi
            //s+denoms[i] kar raha tha mein. iss denoms[i] jo ki ek number hai.
            //use string mein pehle convert karna hota hai concatenatino ke liye.
            string temp=s+to_string(denoms[i]);

            myresult.push_back(temp);

        }
    }
    qb[amt]=myresult;
    return myresult;
}

int main(){
    vector<int> denoms={2,3,5,6};
    vector<vector<string>> qb;
    for(int i=0;i<=10;i++){
        vector<string> temp;
        qb.push_back(temp);
    }
//    qb[0].push_back("");
    vector<string> ans=ccpm(denoms,10,qb);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
	return 0;
}
