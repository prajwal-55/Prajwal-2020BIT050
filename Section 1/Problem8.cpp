#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str){

    int start = 0,end = str.length()-1;

    while(start < end){
        if(str[start] == str[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    string str;
    cin>>str;

    string str1 = uppercase(str);

    bool res = palindrome(str1);

    if(res == true)
        cout<<"True";
    else
        cout<<"False";
    
    return 0;
}