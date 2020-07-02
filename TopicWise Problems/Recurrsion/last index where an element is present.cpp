#include<bits/stdc++.h>

using namespace std;

int lastindex(int arr[],int currindex,int val){

	if(currindex==-1){
        return -1;
	}
	if(arr[currindex]==val) return currindex;
	else return lastindex(arr,currindex-1,val);
}

int main(){
	int arr[]={5,9,23,9,2};
	int res=lastindex(arr,sizeof(arr)/sizeof(int)-1,9);
	res!=-1 ? cout<<"present at "<<res : cout<<"not present";
	return 0;
}
