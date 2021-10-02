// Method 1 - (simple Solution)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n){
    int ct0=0,ct1=0,ct2=0;
    for(int i=0;i<n;i++){
        switch(arr[i]){
            case 0:
                ct0++;
                break;
            case 1:
                ct1++;
                break;
            case 2:
                ct2++;
                break;
        }
    }
    int j = 0;
    while(ct0 > 0){
        arr[j] = 0;
        j++;
        ct0--;
    }

    while(ct1 > 0){
        arr[j] = 1;
        j++;
        ct1--;
    }

    while(ct2 > 0){
        arr[j] = 2;
        j++;
        ct2--;
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

    sort012(arr,n);
}