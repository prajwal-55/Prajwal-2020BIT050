#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr,int target){

    int s = 0; //start
    int e = arr.size()-1; //end

    while(s < e){
    int mid = (s + e)/2;

        if(mid == target){
            return arr[mid];
        }
        else if(mid < target){
            s=mid;
        }
        else if(mid > target){
            e=mid;
        }
        s++;
        e--;
    }
    return 0;
}

int main(){

    int n;
    cin>>n;

    int target;
    cin>> target;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    binarySearch(arr,target);

    return 0;
}