#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(),c.end()
typedef pair<int,pair<int,int>> job;

bool cmp_pair(job a,job b){
	int al=a.second.first;
	int at=a.second.second;
	int bl=b.second.first;
	int bt=b.second.second;
	return (al*bt>at*bl);
}
void printOptimal(int L[],int T[],int N){
	vector<job> list;
	for(int i=0;i<N;i++){
		list.push_back(make_pair(i+1,make_pair(L[i],T[i])));
	
	}
	stable_sort(all(list),cmp_pair);
	for(int i=0;i<N;i++){
		cout<<list[i].first<<" ";
	}

	
}
int main(){
	int L[] = { 1, 2, 3, 5, 6 }; 
    	int T[] = { 2, 4, 1, 3, 2 }; 
	int N=sizeof(L)/sizeof(L[0]);
	printOptimal(L,T,N);
	return 0;
}
