#include<bits/stdc++.h>
using namespace std;

//https://stackoverflow.com/questions/24718734/cin-getline-is-removing-the-first-letting-of-my-input-in-c
//https://www.youtube.com/watch?v=AgS9JSzbvtU
int main(){
     string name;
//    cin>>name;
    //I entered Vyanktesh Vyas hi as input
//    cout<<name<<endl;
    //But it only printed Vyanktesh as output.


    //To take input with spaces we have to use getline function
//    getline(cin,name);
//    cout<<name<<endl;
    //now the output is :
    //Vyanktesh
    // Vyas hi
    //empty line
    //on the 6th line only i made the input then the program finished with the above output without taking input at 13
    //and printed an empty space on next line and the remaining characters after space "Vyas hi".
    //this problem occurs because getline function takes input until unless it sees next line character i.e. \n.
    //To avoid this problem we have to use cin.ignore() after \n.
    vector<string> vs;
//    for(int i=0;i<3;i++){
//        getline(cin,name);
//        cin.ignore();
//        vs.push_back(name);
//    }
//    for(int i=0;i<vs.size();i++){
//        cout<<vs[i]<<endl;
//    }

    //yeah 24-31 ka code chala tab pata chalega kya dikkat hai usme.
     for(int i=0;i<3;i++){
        getline(cin,name);
        //yaha par .ignore ke andar 0 pass kar diya iska matlab woh 0 character khayega
        //by default woh 1 character khata hai.
        cin.ignore(0);
        vs.push_back(name);
    }
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<endl;
    }
    return 0;
}
