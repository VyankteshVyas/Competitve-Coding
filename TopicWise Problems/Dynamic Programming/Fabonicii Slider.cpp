#include<bits/stdc++.h>

using namespace std;

int fibonacciSlider(int n){
    int slider[2];
    slider[0]=0; //s[0]=f[0]
    slider[1]=1;//s[1]=f[1]

    //nos is number of slides

    for(int nos=1;nos<=n;nos++){
        int nf=slider[0]+slider[1];
        slider[0]=slider[1];
        slider[1]=nf;
    }

    return slider[0];
}
//this is faster way even more than fibonacci to memorization and tabulization

int main(){
    cout<<fibonacciSlider(10);
	return 0;
}
