#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char arr[32];

void nBits(int n){
    if(n<1){
        printf("\n%s",arr);
    }
    else{
        arr[n-1] = '0';
        nBits(n-1);
        arr[n-1] = '1';
        nBits(n-1);
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        nBits(n);
    }
}