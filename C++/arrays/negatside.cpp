// Method 1 - (simple Solution)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int negatside(int arr[],int n){
    int l=0;
    int r=n-1;

    while(l<=r){
        if(arr[l]<0 && arr[r]<0){
            l++;
        }
        else if(arr[l]>0 && arr[r]>0 ){
            r--;
        }
        else if(arr[l]>0 && arr[r]<0 ){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        else{
            l++;
            r--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    negatside(arr,n);
}