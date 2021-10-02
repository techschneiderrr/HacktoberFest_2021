// Method 1: Using STL

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void minmax(int arr[],int n){
    sort(arr,arr+n);
    cout<<"Min is: "<<arr[0]<<"\n";
    cout<<"Max is: "<<arr[n-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    minmaxarr(arr,n);
}


// Method 2 : Simple Linear Search

void minmaxarr(int arr[], int n){
    int minarr,maxarr;

    if(arr[0]>arr[1]){
        maxarr = arr[0];
        minarr = arr[1];
    }
    else{
        maxarr = arr[1];
        minarr = arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>maxarr){
            maxarr = arr[i];
        }
        else if(arr[i]<minarr){
            minarr = arr[i];
        }
    }

    cout<<"Max is: "<<maxarr;
    cout<<"Min is: "<<minarr;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    minmaxarr(arr,n);
}
