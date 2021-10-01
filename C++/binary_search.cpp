#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int key){

    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    //example
    vector<int>arr={1,2,3,4,5,6,7};
    int key = 5;
    cout<<binarySearch(arr,key);



    return 0;
}