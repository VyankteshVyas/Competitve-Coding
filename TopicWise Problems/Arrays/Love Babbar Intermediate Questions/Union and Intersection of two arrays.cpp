#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity
//also there is an effecient method given at the end of the article check it out too.
void unionprint(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    while(i<n&&j<m){
        if(i+1<n&&arr1[i]==arr1[i+1]){
            while(i+1<n&&arr1[i]==arr1[i+1]){
                i++;
            }
        }
        if(j+1<m&&arr2[j]==arr2[j+1]){
            while(j+1<m&&arr2[j]==arr2[j+1]){
                j++;
            }
        }

        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }else{
            if(arr2[j]<arr1[i]){
                cout<<arr2[j++]<<" ";
            }else{
                cout<<arr1[i++]<<" ";
                j++;
            }
        }


    }

    while(i<n){
        cout<<arr1[i++]<<" ";
    }

    while(j<m){
        cout<<arr2[j++]<<" ";
    }
}

void intersectionPrint(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;

    while(i<n&&j<m){
        if(i+1<n&&arr1[i]==arr1[i+1]){
            while(i+1<n&&arr1[i]==arr1[i+1]){
                i++;
            }
        }
        if(j+1<m&&arr2[j]==arr2[j+1]){
            while(j+1<m&&arr2[j]==arr2[j+1]){
                j++;
            }
        }

        if(arr1[i]>arr2[j]){
            j++;
//            cout<<"1imp";
        }else{
            if(arr2[j]>arr1[i]){
                i++;
//                cout<<"2imp";
            }else{
//                cout<<"imp";
                cout<<arr1[i++]<<" ";
                j++;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    unionprint(arr1,arr2,n,m);
    cout<<"\n";
    intersectionPrint(arr1,arr2,n,m);
    return 0;
}
