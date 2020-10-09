#include<bits/stdc++.h>
using namespace std;

//time complexity is O(n+k) where n is size of array and k is range of array.
void countSort(vector<int> &arr){
    int maxValueInArr=*max_element(arr.begin(),arr.end());
    int minValueInArr=*min_element(arr.begin(),arr.end());

    vector<int> countArr(maxValueInArr-minValueInArr+1,0);
    vector<int> outputArr(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        countArr[arr[i]-minValueInArr]++;
    }
    for(int i=1;i<countArr.size();i++){
        countArr[i]+=countArr[i-1];
    }
    for(int i=arr.size()-1;i>=0;i--){
        outputArr[countArr[arr[i]-minValueInArr]-1]=arr[i];
        countArr[arr[i]-minValueInArr]--;
    }
    for(int i=0;i<outputArr.size();i++){
        cout<<outputArr[i]<<" ";
    }
}

int main(){
    vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 10 };
    countSort(arr);
    return 0;
}

