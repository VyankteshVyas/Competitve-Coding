#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v={10, 4, 3, 50, 23, 90};
    int max1,max2,max3;
    max1=max(v[0],max(v[1],v[2]));
    max3=min(v[0],min(v[1],v[2]));
    max2=v[0]+v[1]+v[2]-max1-max3;
    
    for(int i=3;i<v.size();i++){
        if(v[i]>max3){
            if(v[i]>max2){
                if(v[i]>max1){
                    max3=max2;
                    max2=max1;
                    max1=v[i];
                }else{
                    max3=max2;
                    max2=v[i];
                }
            }else{
                max3=v[i];
            }
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
    return 0;
}

