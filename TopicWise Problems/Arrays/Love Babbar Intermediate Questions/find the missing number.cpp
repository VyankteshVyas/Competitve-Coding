#include<bits/stdc++.h>
using namespace std;

//space complexity is O(1) and time complexity is O(n)
//Check out another method which uses xor property and note it down for revision.

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    int expectedSum=n*(n+1)/2;
    cout<<expectedSum-sum;
    return 0;
}
