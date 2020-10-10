#include<bits/stdc++.h>
using namespace std;

class twoStacks{
    int* arr;
    int sizeOfArr;
    int top1,top2;

public:
    twoStacks(int n){
        sizeOfArr=n;
        arr=new int[sizeOfArr];
        top1=-1;
        top2=sizeOfArr;
    }

    void push1(int x){
        if(top2-top1>1&&top1>=-1){
            top1++;
            arr[top1]=x;
        }else{
            cout<<"stack overflow"<<endl;
            return ;
        }
    }

    void push2(int x){
        if(top2-top1>1&&top2<=sizeOfArr){
            top2--;
            arr[top2]=x;
        }else{
            cout<<"stack overflow"<<endl;
            return ;
        }
    }

    int pop1(){
        if(top1>-1){
            int val=arr[top1];
            top1--;
            return val;
        }else{
            cout<<"stack underflow"<<endl;
            exit(1);
        }
    }

    int pop2(){
        if(top2<sizeOfArr){
            int val=arr[top2];
            top2++;
            return val;
        }else{
            cout<<"stack underflow"<<endl;
            exit(1);
        }
    }

};

int main(){
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << " : " << ts.pop1()
         << endl;
    ts.push2(40);
    cout << "\nPopped element from stack2 is "
         << ": " << ts.pop2()
         << endl;
    return 0;
}

