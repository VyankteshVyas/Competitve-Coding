#include <bits/stdc++.h>
using namespace std;

struct cell{
    int dis,x,y;
    cell(){}
    cell(int xa,int ya,int disa){
        x=xa;
        y=ya;
        dis=disa;
    }
};

bool isInside(int x,int y,int boardbound[]){
    if((x>=1&&x<=boardbound[0])&&(y>=1&&y<=boardbound[1])) return true;

    return false;
}

int minStepsToReachTarget(int knightPos[],int targetPos[],int boardbound[]){
    bool visited[targetPos[0]+1][targetPos[1]+1];
    int startx=knightPos[0];
    int starty=knightPos[1];
    for(int i=1;i<targetPos[0];i++){
        for(int j=1;j<targetPos[1];j++){
            visited[i][j]=false;
        }
    }

    int dx[]={-1,1,-2,2,-2,2,-1,1};
    int dy[]={2,2,1,1,-1,-1,-2,-2};

    cell t(startx,starty,0);

    queue<cell> q;
    q.push(t);
    visited[knightPos[0]][knightPos[1]]=true;

    while(!q.empty()){
        cell temp=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            //struture ka variable banaya hai tabhi apan ko uska constructor fill karna padega.
            //aisa nahi ho sakta ki ek line mein struct tempcell
            //dusri linke mein tempcell(temp.x,temp.y,temp.dis+1);
            //it is not allowed you have to write cell tempcell(temp.x,temp.y,temp.dis+1);. It is allowed
            cell tempcell(temp.x+dx[i],temp.y+dy[i],temp.dis+1);

            if(!visited[tempcell.x][tempcell.y]&&isInside(tempcell.x,tempcell.y,boardbound)){
                q.push(tempcell);
                visited[tempcell.x][tempcell.y]=true;
                if(tempcell.x==targetPos[0]&&tempcell.y==targetPos[1]){
                    return tempcell.dis;
                }
            }


        }
    }



}


int main()
{
	int knightPos[]={1,1};
	int targetPos[]={30,30};
	int boardbound[]={30,30};

    cout<<minStepsToReachTarget(knightPos,targetPos,boardbound)<<endl;
	return 0;
}
