#include <bits/stdc++.h>
using namespace std;

//according to me time complexity is nlogn
//have to check space complexity
bool checkElementRep(vector<int> dupl,int st,int en,int val){
    if(st<=en){
        int mid=st+(en-st)/2;
        if(dupl[mid]==val){
            if((mid>0&&dupl[mid-1]==dupl[mid])||(mid<dupl.size()-1&&dupl[mid+1]==dupl[mid])){
                return true;
            }
        }

        if(dupl[mid]>val){
            return checkElementRep(dupl,st,mid-1,val);
        }

        if(dupl[mid]<val){
            return checkElementRep(dupl,mid+1,en,val);
        }
    }

    return false;
}

int firstNonRepeating(vector<int> v){
    vector<int> dupl=v;
    sort(dupl.begin(),dupl.end());
    for(int i=0;i<v.size();i++){
        if(!checkElementRep(dupl,0,v.size()-1,v[i])){
            return v[i];
        }
    }

    return INT_MIN;
}

int main() {
    vector<int> v;
    v={-1 ,2, -1 ,3, 2};
    cout<<firstNonRepeating(v);
}

