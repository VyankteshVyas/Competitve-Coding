#include<bits/stdc++.h>
using namespace std;

int totalSoldiers(int st,int en,vector<int> v,int bishuPower){
    if(st<=en){
        int mid=st+(en-st)/2;
        if(v[mid]==bishuPower){
            while(mid<v.size()&&v[mid]==bishuPower){
                mid++;
            }
            return mid;
        }
        if(v[mid]>bishuPower){
            int val=totalSoldiers(st,mid-1,v,bishuPower);
            return val;
            
        }
        if(v[mid]<bishuPower){
            int val=totalSoldiers(mid+1,en,v,bishuPower);
            if(val==0){
                return mid+1;
            }
            return val;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int rounds;
    cin>>rounds;
    sort(v.begin(),v.end());
    vector<int> prefixSum;
    int sum=0;
    for(int i=0;i<v.size();i++){
        prefixSum.push_back(v[i]+sum);
        sum+=v[i];
    }
    while(rounds--){
        int bishuPower;
        cin>>bishuPower;
        int ans=totalSoldiers(0,v.size()-1,v,bishuPower);
        cout<<ans<<" ";
        if(ans==0){
            cout<<"0"<<"\n";
        }else cout<<prefixSum[ans-1]<<"\n";
    }
    
    return 0;
}
