#include<bits/stdc++.h>
using namespace std;

int main(){

    int str;
    getout(cin,str);

    unordered_map<string,int>mp;

    for(int i=0;i<str.length()-1;i++){
        mp[str[i]]++;
    }

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}