#include<bits/stdc++.h>
using namespace std;

struct Interval{
    int st,en;
};

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.st < i2.st);
}

//stack method requires O(nlogn) for sorting and O(n) time for linear traversal so overall space complexity is O(nlogn)
//and space complexity is O(n) for stack we will do it in O(1) space by using in-place merge operations
void stackMethod(vector<Interval> &v){
    sort(v.begin(), v.end(), compareInterval);
    stack<Interval> st;
    st.push(v[0]);
    for(int i=1;i<=v.size()-1;i++){
        Interval top=st.top();
        if(top.en>=v[i].st){
            top.st=min(v[i].st,top.st);
            top.en=max(v[i].en,top.en);
            st.pop();
            st.push(top);
        }else{
            st.push(v[i]);
        }
    }

    while(!st.empty()){
        Interval top=st.top();
        cout<<"["<<top.st<<","<<top.en<<"] "<<", ";
        st.pop();
    }
    cout<<"\n";

}

//here space complexity is O(1)
void mergeIntervals(vector<Interval> &v){
    sort(v.begin(),v.end(),compareInterval);
    int index=0;
    for(int i=1;i<v.size();i++){
        if(v[i].st<=v[index].en){
            v[index].st=min(v[index].st,v[i].st);
            v[index].en=max(v[index].en,v[i].en);
        }else{
            index++;
            v[index]=v[i];
        }
    }
    for(int i=0;i<=index;i++){
        cout<<"["<<v[i].st<<","<<v[i].en<<"] "<<", ";
    }
    cout<<"\n";
}

int main(){
    vector<Interval> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int st,en;
        cin>>st>>en;
        Interval temp;
        temp.st=st;
        temp.en=en;
        v.push_back(temp);
    }
    stackMethod(v);
    mergeIntervals(v);
    return 0;
}
