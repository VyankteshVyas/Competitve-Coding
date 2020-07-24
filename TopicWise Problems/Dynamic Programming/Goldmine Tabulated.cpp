
#include<bits/stdc++.h>

using namespace std;

void Goldmine(vector<vector<int>> &mine){
    int ovmax=-1;
    int ovr=-1;
    int ovc=-1;
    vector<vector<int>> smine;
    for(int i=0;i<mine.size();i++){
        vector<int> temp(mine[0].size(),0);
        smine.push_back(temp);
    }
    int dr=mine.size()-1;
    int dc=mine[0].size()-1;



    vector<vector<string>> path;
    for(int i=0;i<mine.size();i++){
        vector<string> temp(mine[0].size(),"");
        path.push_back(temp);
    }

    for(int c=dc;c>=0;c--){
        for(int r=0;r<=dr;r++){
            if(c==dc){
                smine[r][c]=mine[r][c];
                path[r][c]=to_string(r)+"_"+to_string(c);
            }else{
                if(r==0){
                    if(smine[r][c+1]>smine[r+1][c+1]){
                        smine[r][c]=mine[r][c]+smine[r][c+1];
                        path[r][c]=to_string(r)+"_"+to_string(c)+path[r][c+1];
                    }else{
                        smine[r][c]=mine[r][c]+smine[r+1][c+1];
                        path[r][c]=to_string(r)+"_"+to_string(c)+path[r+1][c+1];
                    }

                }else{
                    if(r==dr){
                            if(smine[r][c+1]>smine[r-1][c+1]){
                            smine[r][c]=mine[r][c]+smine[r][c+1];
                            path[r][c]=to_string(r)+"_"+to_string(c)+path[r][c+1];
                        }else{
                            smine[r][c]=mine[r][c]+smine[r-1][c+1];
                            path[r][c]=to_string(r)+"_"+to_string(c)+path[r-1][c+1];
                        }
                    }else{
                        if((smine[r][c+1]>=smine[r+1][c+1])&&(smine[r][c+1]>=smine[r-1][c+1])){
                            smine[r][c]=mine[r][c]+smine[r][c+1];
                            path[r][c]=to_string(r)+"_"+to_string(c)+path[r][c+1];
                        }else{
                            if((smine[r-1][c+1]>=smine[r][c+1])&&(smine[r-1][c+1]>=smine[r+1][c+1])){
                                smine[r][c] = mine[r][c] + smine[r-1][c+1];
                                path[r][c]= to_string(r)+"_"+to_string(c)+path[r-1][c+1];
                            }else{
                                smine[r][c] = mine[r][c] + smine[r+1][c+1];
                                path[r][c]= to_string(r)+"_"+to_string(c)+path[r+1][c+1];
                            }
                        }
                    }
                }
            }
            if(smine[r][c]>ovmax){
                ovmax=smine[r][c];
                ovr=r;
                ovc=c;
            }
        }
    }
    cout<<ovmax<<endl;
    cout<<path[ovr][ovc];
}

//iss question mein path ka issue hai use resolve karna hai
int main(){
    vector<vector<int>> mat;
    for(int i=0;i<4;i++){
        vector<int> temp(4,0);
        for(int j=0;j<4;j++){
            cin>>temp[j];
        }
        mat.push_back(temp);
    }
    Goldmine(mat);
	return 0;
}


//1 0 1 0 0 1
//1 0 1 1 1 1
//1 1 1 1 1 1
//1 1 1 1 0 0
//1 1 1 1 1 1
//0 0 1 1 1 0

//2 6 0 5
//0 7 5 2
//3 0 3 7
//8 0 2 3
