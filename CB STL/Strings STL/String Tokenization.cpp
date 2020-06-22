#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

//we can use this function to break string into list of tokens
//char *strtok(char *s,char *delimeters)
//returns a token on each subsequent call
//on the first call the function should be passed with string argument s
//on subsequent call we should pass the string argument as null

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    char s[100]="Today is a rainy day";
    char *ptr=strtok(s," ");
    cout<<ptr<<endl; //you will get first word Today as output

    // ptr=strtok(s," ");
    // cout<<ptr<<endl;  //again you will get first word Today as output
    //ptr points to first token in given string
    //what this function does is that it creates a new array where it copies the 
    //first token Today and it returns the address of this particular array[T,o,d,a,y,\0]

    //To get the next token we have to pass null as string argument
    // ptr=strtok(NULL," ");
    // cout<<ptr<<endl;//output is is
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;

}