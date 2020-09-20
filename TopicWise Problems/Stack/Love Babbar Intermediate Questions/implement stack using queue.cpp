#include<bits/stdc++.h>
using namespace std;

class mystack{
private:
    queue<int> q1,q2;
public:
    void pus(int x){
        q1.push(x);
    }

    int top(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(q1.front());
        q1.pop();
        queue<int> temp;
        temp=q2;
        q2=q1;
        q1=temp;
        return ans;
    }

    void pop(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        queue<int> temp;
        temp=q2;
        q2=q1;
        q1=temp;
    }

    bool emp(){
        if(q1.empty()) return true;

        return false;
    }
};

int main(){
    mystack ms;
    ms.pus(1);
    ms.pus(2);
    ms.pus(3);
    ms.pus(4);
    ms.pus(5);
    cout<<ms.top()<<endl;
    ms.pus(6);
    ms.pop();
    ms.pop();
    while(!ms.emp()){
        cout<<ms.top()<<endl;
        ms.pop();
    }
    return 0;
}
