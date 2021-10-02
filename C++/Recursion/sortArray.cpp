#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isArraySorted(int n,int arr[]){
    if(n==1)
        return 1;
    
    return (arr[n-1]<arr[n-2])?0:isArraySorted(n-1,arr);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sol = isArraySorted(n,arr);
        if(sol==0){
            cout<<"Not Sorted"<<endl;
        }
        else{
            cout<<"Sorted"<<endl;
        }
    }
}