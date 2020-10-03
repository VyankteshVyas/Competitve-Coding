#include<bits/stdc++.h>
using namespace std;

struct maxSnakeLenData{
    int x,y,len;

};

int snakeLength(vector<vector<int>> &v,vector<vector<int>> &qb,maxSnakeLenData &msld,int row,int col){
    if(qb[row][col]!=-1){
        qb[row][col];
    }

    int forwardMoves=0,downMoves=0;
    if(row<v.size()-1&&abs(v[row][col]-v[row+1][col])==1){
        downMoves=snakeLength(v,qb,msld,row+1,col);
    }
    if(col<v[0].size()-1&&abs(v[row][col]-v[row][col+1])==1){
        forwardMoves=snakeLength(v,qb,msld,row,col+1);
    }

    qb[row][col]=1+max(forwardMoves,downMoves);
    if(qb[row][col]>msld.len){
        msld.len=qb[row][col];
        msld.x=row;
        msld.y=col;
    }
    return qb[row][col];
}

int maxLengthSnake(vector<vector<int>> &v,vector<vector<int>> &qb,maxSnakeLenData &msld){
    for(int i=0;i<v.size();i++){
        snakeLength(v,qb,msld,i,0);
    }
    int row=msld.x,col=msld.y;
    while(qb[row][col]!=1){
        cout<<v[row][col]<<" ";
        int downMove=0,forwardMove=0;
        if(row<v.size()-1){
            downMove=qb[row+1][col];
        }
        if(col<v[0].size()-1){
            forwardMove=qb[row][col+1];
        }
        if(forwardMove>downMove){
            col+=1;
        }else row+=1;
    }
    cout<<v[row][col]<<" ";
}

int main(){
    vector<vector<int>> v;
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        vector<int> temp;
        int x;
        for(int i=0;i<col;i++){
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    vector<vector<int>> qb;
    for(int i=0;i<row;i++){
        vector<int> temp(col,-1);
        qb.push_back(temp);
    }
    qb[row-1][col-1]=1;
    maxSnakeLenData msld;
    msld.len=0;
    msld.x=0;
    msld.y=0;
    maxLengthSnake(v,qb,msld);
    return 0;
}
//4 4
//9 6 5 2
//8 7 6 5
//7 3 1 6
//1 1 1 7
