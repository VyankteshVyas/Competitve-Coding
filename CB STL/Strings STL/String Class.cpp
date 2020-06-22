#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

//string class is not a data structure. It is like a container which is going to contain a character array
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    string s;    //string object
    string s1("Hello");

    string s2(s1);
    string s3=s2;

    char arr[]={'a','b','c','\0'};
    string s4(arr);

    cout<<s<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;

    if(s.empty()){cout<<"s is empty string"<<endl;}

    //Append
    s.append("I love c++");
    cout<<s<<endl;

    s+=" and Python";
    cout<<s<<endl;

    //Remove 
    cout<<s.length()<<endl;
    s.clear();
    cout<<s.length()<<endl;

    //Compare two strings
    s="Apple";
    s1="Mango";

    cout<<s.compare(s1)<<endl; //Returns 0 if equal else >0 or<0 integer.
    //It is going to make lexographical comparison. Here -ve output means apple is smaller 
    //than mango. If we reverse the comparison we get reversed output
    cout<<s1.compare(s)<<endl;

    //Overloaded Operator
    if(s1>s) cout<<"Mango is lexographical greater than Apple"<<endl;

    //Accessing ith character of string 
    cout<<s[2]<<endl;

    //Find Substrings
    s="I want to have apple juice";
    int idx=s.find("apple");
    cout<<idx<<endl;

    //Remove a word from the string
    string word = "apple";
    int lenth=word.length();
    cout<<s<<endl;
    s.erase(idx,lenth+1);
    //we are removing lenth+1 bcoz we also want to remove space after apple
    //otherwise changed string will have two spaces btwn have and juice 
    cout<<s<<endl;

    //Iterate over all characters in string
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    //Iterate over string with help of iterators
    for(string::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    //Iteratino using for each loop
    for(auto c:s) cout<<c<<" ";
    //here auto will automatically detect that it should be char
    return 0;

}