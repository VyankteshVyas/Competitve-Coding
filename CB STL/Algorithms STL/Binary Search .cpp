
#include<bits/stdc++.h>
using namespace std;



int main(){

    //If the array is sorted then binary search is more effecient that linear search
    int arr[]={1,2,3,4,4,4,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=4;

    bool present= binary_search(arr,arr+n,key);
    if(present) cout<<"Key is present"<<endl;
    else cout<<"Key not present"<<endl;

    //Lower Bound : Returns address of first bucket greater than or equal to key
    auto it=lower_bound(arr,arr+n,4);
    cout<<it-arr<<endl;

    //Upper Bound : Returns adress of first bucket greater than key
    it=upper_bound(arr,arr+n,4);
    cout<<it-arr<<endl;


    return 0;

}
