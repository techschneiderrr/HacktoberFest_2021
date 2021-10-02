// Union of two sorted arrays (without duplication)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int unionarr(int a[],int b[],int n,int m){
    
    int x=0,y=0;

    while(x<n and y<m){
        if(a[x] < b[y]){
            cout<<a[x]<<" ";
            x++;
        }

        else if(a[x] > b[y]){
            cout<<b[y]<<" ";
            y++;
        }
        else{
            cout<<b[y]<<" ";
            y++;
            x++;
        }
    }

    while(x<n){
        cout<<a[x]<<" ";
        x++;
    }
    while(y<m){
        cout<<b[y]<<" ";
        y++;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];   
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    unionarr(a,b,n,m);
}