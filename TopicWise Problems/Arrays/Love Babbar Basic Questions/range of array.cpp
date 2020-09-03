#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minval=arr[0];
    int maxval=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<minval) minval=arr[i];

        if(arr[i]>maxval) maxval=arr[i];
    }

    cout<<"range of array is "<<maxval-minval<<endl;
    return 0;
}
