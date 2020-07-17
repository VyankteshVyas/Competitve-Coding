#include<bits/stdc++.h>

using namespace std;

int fibtab(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    int a1=0,a2=1;
    int ans=1;
    for(int i=1;i<=n-2;i++){
        int temp=a2;
        a2+=a1;
        a1=temp;
    }
    return a2;
}

int fibm(int n,vector<int> &qb){
    if(n==1){
        qb[n]=0;
        return 0;
    }
    if(n==2){
        qb[n]=1;
        return 1;
    }
    //yaha par maine ek galti aur kardi thi
    //maine fib1 aur fib2 ifelse blocks ke andar declare
    //aur initialize kar diye the. iski wajah se unka access restrict
    //ho ja raha tha.
    int fib1,fib2;
    if(qb[n-1]!=0){
        fib1=qb[n-1];
    }else{
        fib1=fibm(n-1,qb);
        qb[n-1]=fib1;
    }

    if(qb[n-2]!=0){
        fib2=qb[n-2];
    }else{
        fib2=fibm(n-2,qb);
        qb[n-2]=fib2;
    }
    int fn=fib1+fib2;

    return fn;
}

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    int fib1=fib(n-1);
    int fib2=fib(n-2);
    int fn=fib1+fib2;

    return fn;
}

int main(){
    vector<int> qb(10,0);
    cout<<fib(9)<<endl;
    cout<<fibm(9,qb)<<endl;
    cout<<fibtab(9)<<endl;
	return 0;
}


