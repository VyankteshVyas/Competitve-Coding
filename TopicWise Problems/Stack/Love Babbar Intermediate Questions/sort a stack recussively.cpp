#include<bits/stdc++.h>
using namespace std;

void elementCorrPos(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    if(s.top()>x){
        int topValue=s.top();
        s.pop();
        elementCorrPos(s,x);
        s.push(topValue);
    }else{
        s.push(x);
    }
}

void sortingMyStack(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int topValue=s.top();
    if(topValue<=x){
        s.pop();
        sortingMyStack(s,topValue);
        if(s.top()<=x){
            s.push(x);
        }else{
            elementCorrPos(s,x);
        }
    }else{
        s.pop();
        sortingMyStack(s,x);

        if(s.top()<=topValue){
            s.push(topValue);
        }else{
            elementCorrPos(s,topValue);
        }
    }
}

int main(){
    stack<int> s;
    s.push(41);
    s.push(3);
    s.push(32);
    s.push(2);
    s.push(11);
    stack<int> stackCopy=s;
    while(!stackCopy.empty()){
        cout<<stackCopy.top();
        stackCopy.pop();
        cout<<"\n";
    }
    cout<<"done printing original stack \n";
    int topValue=s.top();
    s.pop();
    sortingMyStack(s,topValue);

    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}
