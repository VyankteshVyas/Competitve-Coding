
#include<bits/stdc++.h>
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(arr[0]);

    int key=11;
    auto it=find(arr,arr+n,key);
    //starting from arr[0] to arr[n-1] i.e. [ arr[0],arr[n-1] ) arr[n] will be excluded index

    cout<<it<<endl; /// we will be getting addres like 0x7ffe8466447
    //In c++ if you subtract 2 address then you get no. of boxes btwn 2 addresses
    //So to find index of this iterator we will subtract it from base address.

    int index=it-arr;
    if(index==n) cout<<"Key not present"<<endl;
    else cout<<index<<endl;

    return 0;

}