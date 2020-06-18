
#include<bits/stdc++.h>
using namespace std;

template<typename ForwardIterator,typename T>

ForwardIterator Search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start==key) return start;

        start++;
    }
    return end;
}

class Book{
public:
    string name;
    int price;

    Book(){}
    Book(string name,int price){
        this->name=name;
        this->price=price;
    }
};

class BookCompare{
public:
    bool operator()(){
        
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Book b1("C++",100);  //old edition
    Book b2("python",120);
    Book b3("Java",130);
    Book b4(b1); //b4 is a copy of b1

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book bookToFind("C++",110);  //new edition
    //Here if we use search funcn to find if bookToFind is available or not in list
    //Then C++ don't know how to compare user defined data type. 
    //So it will give error at: if(b1==bookToFind) here it doesnot know how to compare
    //So we have to define comparator for user defined data type.




    return 0;

}