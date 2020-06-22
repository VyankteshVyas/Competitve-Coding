#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

char *mystrtok(char *s,char delim){
    static char* input=NULL;
    //the state of a static variables is initialized only once in a function call
    //and in every subsequent call the static variable will have the same state as
    //previous function call. This is what a static variable does

    if(s!=NULL){
        //we are making first call
        input = s;
    }

    //check here base case
    if(input==NULL) return NULL;

    //start extracting tokens and store them in an array
    //This array should be made dynamic bcoz we want this array to exist even after function call

    char *output=new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++){
        if(input[i]!=delim){
            output[i]=input[i];
        }else{
            output[i]='\0';
            input=input+i+1;
            return output;
        }
    }

    //corner case
    output[i]='\0';
    input=NULL;
    return output;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    char s[100]="Today is a rainy day";
    //yaha par ek galti ho gayi mujhe ' ' pass karna tha but maine pehle " " pass kar diya tha
    char *ptr=mystrtok(s,' ');
    cout<<ptr<<endl; 

    while(ptr!=NULL){
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }
    return 0;

}