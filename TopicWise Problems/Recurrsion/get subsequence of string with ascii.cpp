#include <bits/stdc++.h>
using namespace std;

vector<string> gsswa(string s,int start,int len){


    char c=s[0];
    vector<string> result;
    if(start==len-1){
        result.push_back("  ");
        string temp(1,s[0]);
	//yaha par agar mein string temp=s[0] karta ya char temp=s[0] karta toh error milta
	//bcoz dono hi case mein woh string nahi banti. string banane ke liye apan ne yaha 
	//string declare karte waqt uske constructor mein size of string and character to fill
	//with in whole string.
        result.push_back(temp);
        int chval=s[0];
        string ascstr=to_string(chval);
        result.push_back(ascstr);
        return result;
    }
    string str=s.substr(start+1,len-start);
    vector<string> subseq=gsswa(str,start+1,len);

    for(string temp: subseq){
        result.push_back(temp);
        result.push_back(c+temp);
        int chval=c;
        string ascstr=to_string(chval);
        result.push_back(ascstr+temp);
    }
    return result;
}
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    vector<string> res=gsswa(s,0,len);
    for(int i=0;i<res.size();i++){
       cout<<res[i]<<endl;
    }
	return 0;
}
