
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a<=b;
}

int main(){


    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    rotate(arr,arr+2,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    //output is 30 40 50 10 20
    cout<<endl;
    //For rotating other containers also the code is same. Like for vector it is like this
    vector<int> v{10,20,30,40,50};
    rotate(v.begin(),v.begin()+2,v.end());
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    //output is 30 40 50 10 20
    cout<<endl;
    //Next Permutation
    //It is for the next lexicographically bigger arrangement then current array arrangement
    next_permutation(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    //Output will be 30 40 50 20 10
    cout<<endl;
    
    //Reverse Function
    reverse(arr,arr+3);
    for(int i=0;i<n;i++) cout<<arr[i];
    //output will be 50 40 30 10 20
    return 0;

}
