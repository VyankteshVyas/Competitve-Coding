
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a<=b;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    pair<int,char> p;
    p.first=10;
    p.second='B';

    pair<int,char> p2(p);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,string> p3=make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<endl;

    pair<pair<int,int>,string> car;
    car.second="Audi";
    car.first.first=1;
    car.first.second=2;

    cout<<car.second<<endl;

    
    return 0;

}