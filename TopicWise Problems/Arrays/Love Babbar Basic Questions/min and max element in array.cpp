#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10 , 12 , 13 ,1 ,70 ,-1 ,16};
    int arrsize=sizeof(arr)/sizeof(int);

    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<arrsize;i++){
        if(arr[i]<min) min=arr[i];

        if(arr[i]>max) max=arr[i];
    }

    cout<<"min="<<min<<" max="<<max;
    return 0;
}
