#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;

    for(int i=0;i<l-r+1;i+=2){
        cout<<l+i<<" "<<l+i+1<<endl;
    }
}