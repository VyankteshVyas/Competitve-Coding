#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

bool comp(string s1,string s2){
    if(s1.length()==s2.length()){
        //comparison on basis of string lexicographical order 
        //in case of same length of string
        return s1<s2; //used overloaded < operator
    }
    return s1.length()>s2.length();
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;

    cin.get();//to consume any extra enter that is after \n

    string s[n];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
        //benefit is that we can take input of string of indefinite length
        //for the string class cin.getline() does not work instead you have 
        //to make a call to getline function with cin and s[i] as parameters
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    sort(s,s+n);
    //By default comparison in string is done on basis of lexicographical order

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    //If we want to change the comparison logic than we pass our comparator function in sort
    //like sorting on basis of length
    sort(s,s+n,comp);
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;

}