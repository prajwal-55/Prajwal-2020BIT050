#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
     cout<<"Enter Size of array ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"Enter Target ";
    cin>>k;

    cout<<"Enter array ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i] + arr[j]) == k){
                cout<<"["<<arr[i]<<","<<arr[j]<<"]";
            }
        }
    }

    return 0;
}