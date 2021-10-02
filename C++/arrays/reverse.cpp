// Iterartive Approch Method

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    reverse(arr,n);
}


// Recursive Approach

int reversearray(int arr[],int start,int end){
    
    if(start>end){
        return 0;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reversearray(arr,start+1,end-1);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reversearray(arr,0,n-1);

    return 0;
}