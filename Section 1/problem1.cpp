#include<bits/stdc++.h>
using namespace std;

int main(){

   string str;
   cin>>str;

   int s=0,e=str.length()-1;

   while(s<=e){
    swap(str[s],str[e]);
    s++;
    e--;
   }

   cout<<str<<endl;

    return 0;
}