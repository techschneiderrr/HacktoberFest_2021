#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char A,char B,char C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"Move the disk from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        TOH(n,'A','B','C');
    }
}
