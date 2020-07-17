#include<bits/stdc++.h>

using namespace std;


int goldminememorized(vector<vector<int>> &mine, int r ,int c,vector<vector<int>> &qb){

    if(c==mine[0].size()-1){// yaha par maine base case mein condition c==mine[0].size() lagaya tha
        return mine[r][c];  // and fir mein soch raha tha ki yaha par integer mein kya return karu.
    }
    //yaha par maine bhulne ki galti kari thi maine gstod ko 0 se initialize nahi kiya tha
    int gstod=0;
    int grm1tod=INT_MIN;
    int grtod=INT_MIN;
    int grp1tod=INT_MIN;

    if(r>0){
        if(qb[r-1][c+1]!=0){
            grm1tod=qb[r-1][c+1];
        }else{
            grm1tod=goldminememorized(mine, r-1, c+1,qb);
            qb[r-1][c+1]=grm1tod;
        }
    }
    if(qb[r][c+1]!=0){
        grtod=qb[r][c+1];
    }else{
        grtod=goldminememorized(mine, r, c+1,qb);
        qb[r][c+1]=grtod;
    }


    if(r<mine.size()-1){
        //yaha par maine ek galti kar di thi. maine r<mine.size() likh diya tha instead of r<mine.size()-1
        if(qb[r+1][c+1]!=0){
            grp1tod=qb[r+1][c+1];
        }else{
            grp1tod=goldminememorized(mine, r+1, c+1,qb);
            qb[r+1][c+1]=grp1tod;
        }
    }
    gstod= mine[r][c] + max(grm1tod , max(grtod, grp1tod));
    return gstod;
}


int main(){
    int maxgold=INT_MIN;
    vector<vector<int>> mat;
    for(int i=0;i<4;i++){
        vector<int> temp(4,0);
        for(int j=0;j<4;j++){
            cin>>temp[j];
        }
        mat.push_back(temp);
    }
    vector<vector<int>> qb;
    for(int i=0;i<4;i++){
        vector<int> temp(4,0);
        qb.push_back(temp);
    }
    for(int i=0;i<mat.size();i++){
        int temp= goldminememorized(mat,i,0,qb);
        if(temp>maxgold){
            maxgold=temp;
        }
    }
    cout<<maxgold<<endl;
	return 0;
}

//2 6 0 5
//0 7 5 2
//3 0 3 7
//8 0 2 3
