#include<bits/stdc++.h>

using namespace std;

struct cust{
    bool update=false;
    int val;
    cust(){}
    cust(int key){
       val=key;
       update=true;
    }
};
int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    int fib1=fib(n-1);
    int fib2=fib(n-2);

    return (fib1+fib2);
}

int fibm(int n,cust arr[]){
    if(n==1) return 0;
    if(n==2) return 1;

    if(arr[n].update==true) return arr[n].val;
    int fib1=fibm(n-1,arr);
    arr[n-1].val=fib1;
    int fib2=fibm(n-2,arr);
    arr[n-2].val=fib2;
    return fib1+fib2;

}

int main(){
    struct cust arr[10];
	cout<<fibm(9,arr);

	return 0;
}
