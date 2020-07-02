#include<bits/stdc++.h>

//using namespace std ke baad ; lagana bhul gaya tha.
using namespace std;

int larg(int arr[],int currindex,int last){
	//if i did here sizeof(arr) it would have gave me 4 instead of 20 bcoz arr is pointer to 
	//first element of array arr.
	if(currindex==last-1) return arr[currindex];
	return max(arr[currindex],larg(arr,currindex+1,last));
}

int main(){
	int arr[]={5,12,23,-1,9};
	cout<<larg(arr,0,sizeof(arr)/sizeof(int));
	return 0;
}