#include<bits/stdc++.h>
using namespace std;

void evenNum(int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<", ";
        }
    }
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    evenNum(arr,n);

    return 0;
}