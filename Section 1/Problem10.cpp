#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int s = 1;
    int fac = 1;
    while(n > 0){
        fac *= n;
        n--;
    }
    cout<<fac<<endl;


    return 0;
}