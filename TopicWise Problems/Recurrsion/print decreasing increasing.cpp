#include<bits/stdc++.h>

using namespace std;




void printDecIncr(int n){
    if(n==0) return;
    cout<<n<<" ";
    printDecIncr(n-1);
    cout<<n<<" ";
}

int main(){
    printDecIncr(3);
	return 0;
}
