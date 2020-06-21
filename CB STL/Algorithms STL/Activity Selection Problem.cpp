#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return (a.second<b.second);
}
int main() {


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int> > v;
        //remember mistake here there should be space between >>. so it should be > > not >>
        //in abobe vector<pair<int,int> > 
        int temp1,temp2;
        for(int i=0;i<n;i++){
            cin>>temp1>>temp2;
            v.push_back(make_pair(temp1,temp2));
        }
        sort(v.begin(),v.end(),cmp);
        int cnt=1,crttime=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>=crttime){
                cnt++;
                crttime=v[i].second;
            }
        }
        cout<<cnt<<endl;

    }

    return 0;

}
💡 Activity Selection Problems