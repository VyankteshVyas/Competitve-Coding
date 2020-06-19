
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a>b;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n,key;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort an array using sort function
    //starting point is included and ending point is excluded.
    sort(a,a+n); 
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;

    //To sort elements in decreasing order we need to define compare function.
    //Passing function as a parameter to sort function
    sort(a,a+n,compare);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    
    
    

    return 0;

}