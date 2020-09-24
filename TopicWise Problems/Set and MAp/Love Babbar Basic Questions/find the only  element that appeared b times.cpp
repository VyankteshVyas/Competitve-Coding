#include <bits/stdc++.h>
using namespace std;

int elementAppearBTimes(int arr[],int a,int b,int n){
    unordered_set<int> s;
    int aSum=0,sum=0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
            sum+=arr[i];
        }
        aSum+=arr[i];
    }
    sum*=a;
    int ans=(aSum-sum)/(b-a);
    return ans;
}

int main() {
	int arr[] = { 1, 1, 2, 2, 2, 3, 3, 3 };
    int a = 3, b = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<elementAppearBTimes(arr,a,b,n);
	return 0;
}

