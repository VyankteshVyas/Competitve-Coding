#include<bits/stdc++.h>

using namespace std;

void maxsquarematrix(vector<vector<int>> &mat){
    vector<vector<int>> strg;
    for(int i=0;i<mat.size();i++){
        vector<int> temp(mat[0].size(),0);
        strg.push_back(temp);
    }
    int maxsq=-1;
    int maxsqr=-1,maxsqc=-1;
    int dr=mat.size()-1;
    int dc=mat[0].size()-1;
    for(int i=dr;i>=0;i--){
        for(int j=dc;j>=0;j--){
            if(i==dr||j==dc){
                strg[i][j]=mat[i][j];
            }else{
                if(mat[i][j]==0){
                    strg[i][j]=0;
                }else{

                    strg[i][j]=min(strg[i+1][j],min(strg[i][j+1],strg[i+1][j+1]))+1;
                }
            }
            if(strg[i][j]>maxsq){
                maxsq=strg[i][j];
                maxsqr=i;
                maxsqc=j;
            }

        }
    }

    cout<<"maximum square size="<<maxsq<<" with row and coloumn respectively as"<<maxsqr<<" "<<maxsqc<<endl;
    for(int i=0;i<strg.size();i++){
        for(int j=0;j<strg[0].size();j++){
            cout<<strg[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main(){
    vector<vector<int>> mat;
    for(int i=0;i<6;i++){
        vector<int> temp(6,0);
        for(int j=0;j<6;j++){
            cin>>temp[j];
        }
        mat.push_back(temp);
    }
    maxsquarematrix(mat);
	return 0;
}


//1 0 1 0 0 1
//1 0 1 1 1 1
//1 1 1 1 1 1
//1 1 1 1 0 0
//1 1 1 1 1 1
//0 0 1 1 1 0
