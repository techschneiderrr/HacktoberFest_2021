// Merge two arrays without extra space

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<m;i++){
        if(a[i] > b[0]){
            swap(a[i],b[0]);
        }

        int j=0;
        while(j+1<n && b[j]>b[j+1]){
            swap(b[j],b[j+1]);
            j++;
        }
    }

    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}