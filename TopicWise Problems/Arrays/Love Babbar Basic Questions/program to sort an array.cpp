#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    int start, end;
};

bool compareInterval(Interval i1, Interval i2 ){
    if(i1.start<i2.start){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //To sort in ascending order
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    //To sort in descending order
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    Interval arry[]=  { {6,8}, {1,9}, {2,4}, {4,7} };
    int m = sizeof(arry)/sizeof(arry[0]);
    sort(arry,arry+m,compareInterval);

    cout << "Intervals sorted by start time : \n";
    for (int i=0; i<m; i++)
       cout << "[" << arry[i].start << "," << arry[i].end
            << "] ";

    return 0;
}
