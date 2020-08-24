#include<bits/stdc++.h>
using namespace std;

//check out this link. It has many more effecient solutions
//https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

int main(){
     int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=2;
    sort(arr,arr+n);
    cout<<arr[k-1]<<endl;
    cout<<arr[n-k]<<endl;

    return 0;
}
