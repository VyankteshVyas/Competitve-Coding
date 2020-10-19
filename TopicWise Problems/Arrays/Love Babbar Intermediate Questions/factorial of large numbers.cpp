#include <bits/stdc++.h>
using namespace std;

int subFact(int arr[],int n,int resSize){
    int carry=0;
    for(int i=0;i<=resSize;i++){
        int val=(arr[i])*n+carry;
        arr[i]=val%10;
        carry=val/10;
    }
    while(carry>0){
        arr[++resSize]=carry%10;
        carry/=10;
    }
    return resSize;
}

void fact(int n){
    int arr[10000];
	arr[0]=1;
	int resSize=0;
	for(int i=2;i<=n;i++){
	    resSize=subFact(arr,i,resSize);
	}
	for(int i=resSize;i>=0;i--){
	    cout<<arr[i];
	}
	cout<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    fact(n);
	}
	return 0;
}