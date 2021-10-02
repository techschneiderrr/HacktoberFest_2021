#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char arr[32];

void kary(int n,int k){
    if(n<1){
        printf("\n%s",arr);
    }
    else{
        for(int i=0;i<k;i++){
            arr[n-1] = i+'0';
            kary(n-1,k);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        kary(n,k);
    }
}