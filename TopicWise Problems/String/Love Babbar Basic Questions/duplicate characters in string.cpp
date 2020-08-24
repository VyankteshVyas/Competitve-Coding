#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cin.ignore(0);
    int arr[256]={0};
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            arr[int(str[i])]++;
        }
    }
    for(int i=0;i<256;i++){
            if(arr[i]>1) cout<<"arr of "<<i<<" ="<<arr[i]<<" for character "<<char(i)<<endl;

    }



    return 0;
}
