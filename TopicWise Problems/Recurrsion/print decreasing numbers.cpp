#include<bits/stdc++.h>

using namespace std;




void printDecr(int n){
    if(n==0) return;
    cout<<n<<" ";
    printDecr(n-1);
}

int main(){
    printDecr(5);
	return 0;
}
