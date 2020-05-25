#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cin>>n;
    cout<<"*";
    for(int j=1;j<n/2;j++){
            cout<<" "; 
    }
    for(int j=n/2;j<n;j++) cout<<"*";

    cout<<"\n";
    for(int i=1;i<n/2;i++){
        cout<<"*";
        for(int j=1;j<n/2;j++) cout<<" ";

        cout<<"*\n";

    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=(n/2)+1;i<n-1;i++){
        for(int j=0;j<n/2;j++) cout<<" ";

        cout<<"*";
        for(int j=(n/2)+1;j<n-1;j++) cout<<" ";

        cout<<"*";
        cout<<"\n";
    }
    for(int i=0;i<=n/2;i++) cout<<"*";

    for(int i=(n/2)+1;i<n-1;i++) cout<<" ";

    cout<<"*";
	return 0;
	
}