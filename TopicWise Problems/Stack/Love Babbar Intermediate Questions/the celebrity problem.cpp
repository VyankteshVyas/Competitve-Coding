class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
    int totalPeople=n;
    stack<int> s;
    for(int i=0;i<totalPeople;i++){
        s.push(i);
    }

    while(s.size()>=2){
        int x=s.top();
        s.pop();
        int y=s.top();
        s.pop();
        if(M[x][y]){
            s.push(y);
        }else{
            s.push(x);
        }
    }
    int ans=s.top();
    for(int i=0;i<totalPeople;i++){
        if(M[ans][i]){
            return -1;
        }
        if(i!=ans&&!M[i][ans]){
                return -1;
        }
    }
    return ans;
    }
};